// LOG
UE_LOG(LogTemp, Warning, TEXT("Actors Name"));
// Show on screen
GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Overlapped Actor"));

// Create Mesh
UStaticMeshComponent* 		// Create StaticMesh
UShapeComponent*		// Create Shape

// Set 3D
mesh->SetWorldScale3D(FVector(Xf, Yf, Zf));
mesh->SetWorldLocation(FVector( X, Y, Z));

// Create Static Mesh
UPROPERTY(EditAnywhere)
UStaticMeshComponent* mesh;

mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Meshes Name"));

// Root Component
SetRootComponent(mesh);
NewMesh->AttachTo(RootComponent);
