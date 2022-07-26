// Materials , change meshes material

	UPROPERTY(EditAnywhere)
	FLinearColor NewColour = FLinearColor::Black;


#include "Materials/MaterialInstanceDynamic.h"

UMaterialInstanceDynamic* DMat = mesh->CreateAndSetMaterialInstanceDynamic(0);
	if (DMat) {
		DMat->SetVectorParameterValue("Color", NewColour);
	}
  

// Create Static Mesh
UPROPERTY(EditAnywhere)
UStaticMeshComponent* mesh;

mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshes Name"));
SetRootComponent(mesh);

