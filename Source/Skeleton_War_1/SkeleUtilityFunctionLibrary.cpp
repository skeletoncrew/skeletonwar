// Fill out your copyright notice in the Description page of Project Settings.

#include "Skeleton_War_1.h"
#include "SkeleUtilityFunctionLibrary.h"

// Constructor
USkeleUtilityFunctionLibrary::USkeleUtilityFunctionLibrary(const class FPostConstructInitializeProperties& PCIP)
    : Super(PCIP) {

}

FString USkeleUtilityFunctionLibrary::GetCurrentMapReference(AActor* sourceActor) {
    if (sourceActor == NULL) {
        return FString(TEXT("Must have a sourceActor (was NULL)"));
    }

    FString mapName = sourceActor->GetWorld()->GetMapName();
    mapName.RemoveFromStart(sourceActor->GetWorld()->StreamingLevelsPrefix);

    return mapName;
}
