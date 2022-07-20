// Materials , change meshes material
#include "Materials/MaterialInstanceDynamic.h"

UMaterialInstanceDynamic* DMat = mesh->CreateAndSetMaterialInstanceDynamic(0);
	if (DMat) {
		DMat->SetVectorParameterValue("Color", FLinearColor::Yellow);         // 1. Main Parameters name, 2. New Color
	}
  

// Create Static Mesh
UPROPERTY(EditAnywhere)
UStaticMeshComponent* mesh;

mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshes Name"));
SetRootComponent(mesh);

