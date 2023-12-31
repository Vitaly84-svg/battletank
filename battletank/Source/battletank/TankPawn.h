// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "TankPawn.generated.h"



class UStaticMeshComponent;
class ACannon;

UCLASS()
class BATTLETANK_API ATankPawn : public APawn
{
	GENERATED_BODY()

public:
	
	ATankPawn();

	virtual void Tick(float DeltaTime) override;

	void MoveForward(float AxisValue);

	void MoveRight(float AxisValue);

	void RotateRight(float AxisValue);

	void Fire();

	void SetupCannon(TSubclassOf<ACannon> NewCannonClass);

protected:

	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* BodyMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	UStaticMeshComponent* TurretMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	class UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	class USpringArmComponent* SpringArm;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Component")
	class UCameraComponent* Camera;

	UPROPERTY()
	ACannon* Cannon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
	TSubclassOf<ACannon> CannonClass;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cannon")
	class UArrowComponent* CannonSetupPoint;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float RotationSpeed = 100.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement | Rotation")
	float TurretRotationInterpolationKey = 0.5f;

	UPROPERTY()
	class ATankPlayerController* TankController;

private:

	float TargetForwardAxisValue = 0.0f;

	float TargetRightAxisValue = 0.0f;

	float TargetRotateRightAxisValue = 0.0f;
			
	void MovementTank(float DeltaTime);

	void RotationTank(float DeltaTime);

	void RotationTurret();
};
