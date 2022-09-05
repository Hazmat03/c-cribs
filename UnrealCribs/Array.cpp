TArray<AActor*> Array;    // create array of actors
UGameplayStatics::GetAllActorsOfClass(GetWorld(), AFrickinPawn::StaticClass(), Pawns);

Array.Num()   // check number of elements in array
