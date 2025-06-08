// Fill out your copyright notice in the Description page of Project Settings.


#include "BombermanGameMode.h"

ABombermanGameMode::ABombermanGameMode()
{
}

void ABombermanGameMode::BeginPlay()
{
	Super::BeginPlay();
	GenerarLaberinto(10, 10); // Ejemplo de generación de laberinto con dimensiones 10x10
	GenerarEnemigos(5); // Ejemplo de generación de 5 enemigos
}

void ABombermanGameMode::GenerarLaberinto(int32 Width, int32 Heigth)
{
	// Limpiar bloques existentes
	BlocksMap.Empty();

	// Generar patrón básico (aquí puedes implementar 
	// tu algoritmo de generación de laberinto)
	
	for (int32 X = 0; X < Width; ++X)
	{
		for (int32 Y = 0; Y < Heigth; ++Y)
		{
			int32 BlockID = BlockIDCounter++;
			FString BlockType = "Normal"; // Aquí puedes definir la lógica para el tipo de bloque
			// Crear un nuevo bloque (esto debería ser reemplazado por la lógica de creación real)
			ABloques* NewBlock = GetWorld()->SpawnActor<ABloques>();
			if (NewBlock)
			{
				//NewBlock->InicializarBlock(BlockID, BlockType);
				BlocksMap.Add(BlockID, NewBlock);
			}
		}
	}
	// Spawnear bloques según el patrón
	

	
}

void ABombermanGameMode::GenerarEnemigos(int32 EnemyCount)
{ // Limpiar enemigos existentes
	EnemiesArray.Empty();
	// Generar enemigos
	for (int32 i = 0; i < EnemyCount; ++i)
	{
		AEnemigos* NewEnemy = GetWorld()->SpawnActor<AEnemigos>();
		if (NewEnemy)
		{
			EnemiesArray.Add(NewEnemy);
		}
	}
}
