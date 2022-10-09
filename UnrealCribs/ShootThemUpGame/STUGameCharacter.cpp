// ShootThemUp Game. All Rights Reserved


#include "Player/STUGameCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/InputComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/STUCharacterMovementComponent.h"


// Sets default values
ASTUGameCharacter::ASTUGameCharacter(const FObjectInitializer &ObjInit)
    : Super(ObjInit.SetDefaultSubobjectClass<USTUCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


      SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArm");
      SpringArmComp->SetupAttachment(GetRootComponent());
      SpringArmComp->bUsePawnControlRotation = true;

      CameraComponent = CreateDefaultSubobject<UCameraComponent>("Camera");
      CameraComponent->SetupAttachment(SpringArmComp);
}

// Called when the game starts or when spawned
void ASTUGameCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASTUGameCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ASTUGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &ASTUGameCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASTUGameCharacter::MoveRight);
    PlayerInputComponent->BindAxis("LookUp", this, &ASTUGameCharacter::LookUp);
    PlayerInputComponent->BindAxis("TurnAround", this, &ASTUGameCharacter::TurnAround);
    PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &ASTUGameCharacter::Jump);
    PlayerInputComponent->BindAction("Sprint", IE_Pressed, this, &ASTUGameCharacter::SprintStart);
    PlayerInputComponent->BindAction("Sprint", IE_Released, this, &ASTUGameCharacter::SprintStop);
}


void ASTUGameCharacter::MoveForward(float Amount)
{
    IsMovingForward = Amount > 0.0f;
    AddMovementInput(GetActorForwardVector(), Amount);
}

void ASTUGameCharacter::MoveRight(float Amount)
{
    AddMovementInput(GetActorRightVector(), Amount);
}

void ASTUGameCharacter::LookUp(float Amount)
{
    AddControllerPitchInput(Amount);
}

void ASTUGameCharacter::TurnAround(float Amount)
{
    AddControllerYawInput(Amount);
}

void ASTUGameCharacter::SprintStart()
{
    WantsToRun = true;
}

void ASTUGameCharacter::SprintStop()
{
    WantsToRun = false;
}

bool ASTUGameCharacter::IsSprinting() const
{
    return WantsToRun && IsMovingForward && !GetVelocity().IsZero();
}
