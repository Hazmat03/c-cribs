	// Set Mouse Cursor On
APlayerController* PlayerController = GetFirstLocalPlayerController();

FInputModeGameAndUI InputModeData;
InputModeData.SetWidgetToFocus(MainMenu->TakeWidget());
InputModeData.SetLockMouseToViewportBehavior(EMouseLockMode::DoNotLock);

PlayerController->SetInputMode(InputModeData);

PlayerController->bShowMouseCursor = true;


// Delegates
// Data types that reference and execute member functions on C++ Objects
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnColorChanged, const FLinearColor&, Color, const FString&, Name);
DECLARE_MULTICAST_DELEGATE_OneParam(FOnTimerFinished, AActor*);


// Set Inputs
// Axis Mapping

#include "Components/InputComponent.h"

void ASTUGameCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

    PlayerInputComponent->BindAxis("MoveForward", this, &ASTUGameCharacter::MoveForward);
    PlayerInputComponent->BindAxis("MoveRight", this, &ASTUGameCharacter::MoveRight);

}

void ASTUGameCharacter::MoveForward(float Amount)
{
    AddMovementInput(GetActorForwardVector(), Amount);
}

void ASTUGameCharacter::MoveRight(float Amount)
{
    AddMovementInput(GetActorRightVector(), Amount);
}


// ACTION MAPPINGS

void AFuckinPC::SetupInputComponent() {
	Super::SetupInputComponent();

	InputComponent->BindAction("ChangePawn", IE_Pressed, this, &AFuckinPC::ChangePawn);	
	// (Mappings name, enum for event type pointer to class, called function)
}
