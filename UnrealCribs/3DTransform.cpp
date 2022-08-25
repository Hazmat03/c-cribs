// LOG
UE_LOG(LogTemp, Warning, TEXT("Actors Name"));
// Show on screen
GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Overlapped Actor"));


// UENUM
UENUM(BlueprintType)
enum class EMoveType : uint8 {        // All enums must start by E, uint8 - type of enum means max elements of char - 255
	Sin,
	Static
};

switch (MovementType) {
	case EMoveType::Sin: {
		float time = GetWorld()->GetTimeSeconds();        // z = z0 + amp * sin(freq * t)
		CurLoc = GetActorLocation();
		CurLoc.X = InitLoc.X + Amp * FMath::Sin(Freq * time);
		SetActorLocation(CurLoc);
		}
	case EMoveType::Static: {
		break;
	}
	default:
		break;
	}


// USTRUCT
USTRUCT(BlueprintType)
struct FStruc {
	GENERATED_USTRUCT_BODY()
		UPROPERTY(EditAnywhere)
			float Amp = 50.0f;
		UPROPERTY(EditAnywhere)
			float Freq = 3.0f;
		UPROPERTY(EditAnywhere)
			EMoveType MovementType = EMoveType::Static;
};

UPROPERTY(EditAnywhere)
FStruc GeoData;


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

// SpawnActor
TSubclassOf<ABeginOverlapActor> GeoClass;       // Spawning Actor
UWorld* WorldRef = GetWorld();
// Set Transform
const FTransform GeometryTransform = FTransform(FRotator::ZeroRotator, FVector(0.0f, 0.0f, 0.0f));      // ZeroRotator sets all values to 0.0f

ABeginOverlapActor* Spawner = WorldRef->SpawnActor<ABeginOverlapActor>(GeoClass, GTrans);
// Obejct of Spawning Actor
