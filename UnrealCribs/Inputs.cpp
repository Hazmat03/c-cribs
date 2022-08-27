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
