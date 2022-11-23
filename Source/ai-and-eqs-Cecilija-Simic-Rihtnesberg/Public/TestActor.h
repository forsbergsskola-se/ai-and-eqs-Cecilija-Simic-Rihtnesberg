// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestActor.generated.h"


// USTRUCT()
// struct FMyStruct1
// {
// 	GENERATED_BODY()
// 	//FMyStruct2 Var;
// };
//
// USTRUCT()
// struct FMyStruct2
// {
// 	GENERATED_BODY()
// };
//



UCLASS()
class AIANDAQS_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category="GB_21 :) ")

	void DrawSphere(FVector Location, FColor Color);
	
	// Sets default values for this actor's properties
	ATestActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
