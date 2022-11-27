// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "TestActor.generated.h"


UCLASS()
class AIANDAQS_API ATestActor : public AAIController
{
	GENERATED_BODY()
	
public:
	
	// Sets default values for this actor's properties
	ATestActor();


	// Called every frame
	virtual void Tick(float DeltaTime) override;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	

};
