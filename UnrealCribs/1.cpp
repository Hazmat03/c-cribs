// LOG
UE_LOG(LogTemp, Warning, TEXT("Actors Name"));

// Create Mesh
UStaticMeshComponent* 		// Create StaticMesh
UShapeComponent*		// Create Shape


// Materials , change meshes material

UPROPERTY(EditAnywhere)
FLinearColor NewColour = FLinearColor::Black;


#include "Materials/MaterialInstanceDynamic.h"

UMaterialInstanceDynamic* MyIns = MyMesh->CreateAndSetMaterialInstanceDynamic(0);	// Takes materials in mesh, if there's only one material - 0
if (MyIns) {
	MyIns->SetVectorParameterValue("MyColor", FLinearColor::Yellow);	// Sets values on Material (Parameters name, Colour)
}

// Change Material per second

FTimerHandle TimerHandle;
UPROPERTY(EditAnywhere)
	float TimerRate = 3.0f;

GetWorldTimerManager().SetTimer(TimerHandle, this, &ABaseGeometryActor::OnTimerFired, TimerRate, true);		
// TimerHandle, pointer on object to call func, function to change color, frequency variable, looped 

// Set 3D
mesh->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));


// Create Static Mesh
UPROPERTY(EditAnywhere)
UStaticMeshComponent* mesh;

mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshes Name"));


// Root Component
SetRootComponent(mesh);
NewMesh->AttachTo(RootComponent);
