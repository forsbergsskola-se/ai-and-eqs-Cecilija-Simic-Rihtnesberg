// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Navigation/PathFollowingComponent.h"
#include "GP_PathFollowingCopmoment.generated.h"


UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class AIANDAQS_API UGP_PathFollowingCopmoment : public UPathFollowingComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	UGP_PathFollowingCopmoment();

	UPROPERTY(EditAnywhere, Category= "Debug 💜")
	bool Debag;

	UPROPERTY(EditAnywhere, Category="Debug 💜💜")
	FLinearColor DebugColor;
	
protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable)
	void DrawSphereAtTargetDestination(FLinearColor Color, float Time);
};
