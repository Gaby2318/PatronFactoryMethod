// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bloques.h"
#include "BloqueDestructible.generated.h"

/**
 * 
 */
UCLASS()
class PATRONFACTORYMETHOD_API ABloqueDestructible : public ABloques
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	ABloqueDestructible();
	virtual void BlockComportamiento() override;

	UFUNCTION()
	void OnDestruirBloque(AActor* ActorDestruye);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque Destructible")
	int32 PuntosDestruccion;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque Destructible")
	UStaticMeshComponent* MeshComponent;

	// Tiempo que tarda en destruirse
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Bloque Destructible")
	float TiempoDestruccion = 2.0f;

};
