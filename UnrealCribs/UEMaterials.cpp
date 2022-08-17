// Materials , change meshes material
 
// .h file

UPROPERTY(EditAnywhere)
FLinearColor NewColour = FLinearColor::Black;     // default material variable.


// .cpp file

#include "Materials/MaterialInstanceDynamic.h"

void ABaseGeometryActor::SetColor(const FLinearColor& Color)
{
	UMaterialInstanceDynamic* MyIns = MyMesh->CreateAndSetMaterialInstanceDynamic(0);	// checks materials in mesh, (Materials num)
	if (MyIns) {
		MyIns->SetVectorParameterValue("MyColor", Color);	// Sets values on Material (Parameters name, Function parameter)
	}
}

// Change Material per second
#include "TimerManager.h"

FTimerHandle TimerHandle;		// Timer identificator

UPROPERTY(EditAnywhere)
	float TimerRate = 3.0f;

GetWorldTimerManager().SetTimer(TimerHandle, this, &ABaseGeometryActor::OnTimerFired, TimerRate, true);		
// Timer identificator, pointer on object to call func, function to change color, frequency variable, looped 

GetWorldTimerManager().ClearTimer(TimerHandle);		// Stop Timer
