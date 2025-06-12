// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FabricaBloques.generated.h"
class ABloques;
UCLASS()
class PATRONFACTORYMETHOD_API AFabricaBloques : public AActor
{
	GENERATED_BODY()

public:
	// Función para crear bloques según su tipo
	UFUNCTION(BlueprintCallable, Category = "Block Factory")
	//static class ABloques* CrearBloque(UWorld* World, EBlockType BlockType, int32 BlockID, const FTransform& SpawnTransform);
	
	
public:	
	// Sets default values for this actor's properties
	AFabricaBloques();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
