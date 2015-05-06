// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "SkeleUtilityFunctionLibrary.generated.h"

/**
 *
 */
UCLASS()
class USkeleUtilityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_UCLASS_BODY()

        UFUNCTION(BlueprintCallable, BlueprintPure, Category = SkeleFunctionLibrary)
        static FString GetCurrentMapReference(AActor* sourceActor);


    UFUNCTION(BlueprintCallable, Category = SkeleFunctionLibrary)
        static TArray<FString> GetDefaultPlayerNamesFromFile();

};


