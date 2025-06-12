// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bloques.generated.h"

UCLASS()
class PATRONFACTORYMETHOD_API ABloques : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABloques();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Tipo de bloque
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Block Properties")
	FString BlockType;

	// ID único del bloque	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Block Properties")
	int32 BlockID;

	// Método para inicializar el bloque
	virtual void InicializarBlock(int32 ID, const FString& Type);

	// Comportamiento específico del bloque
	virtual void BlockComportamiento();

private:
	// ID único del bloque
	UPROPERTY(VisibleAnywhere, Category = "Bloque")
	int32 UniqueBlockID;

};
