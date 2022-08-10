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


// Set 3D
mesh->SetWorldScale3D(FVector(5.0f, 5.0f, 5.0f));


// Create Static Mesh
UPROPERTY(EditAnywhere)
UStaticMeshComponent* mesh;

mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshes Name"));


// Root Component
SetRootComponent(mesh);
NewMesh->AttachTo(RootComponent);
