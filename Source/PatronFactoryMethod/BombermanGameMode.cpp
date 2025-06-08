// Fill out your copyright notice in the Description page of Project Settings.


#include "BombermanGameMode.h"

ABombermanGameMode::ABombermanGameMode()
{
}

void ABombermanGameMode::BeginPlay()
{
	Super::BeginPlay();
	GenerarLaberinto(10, 10); // Ejemplo de generaci�n de laberinto con dimensiones 10x10
	GenerarEnemigos(5); // Ejemplo de generaci�n de 5 enemigos
}

void ABombermanGameMode::GenerarLaberinto(int32 Width, int32 Heigth)
{
	// Limpiar bloques existentes
	BlocksMap.Empty();

	// Generar patr�n b�sico (aqu� puedes implementar 
	// tu algoritmo de generaci�n de laberinto)
	
	for (int32 X = 0; X < Width; ++X)
	{
		for (int32 Y = 0; Y < Heigth; ++Y)
		{
			int32 BlockID = BlockIDCounter++;
			FString BlockType = "Normal"; // Aqu� puedes definir la l�gica para el tipo de bloque
			// Crear un nuevo bloque (esto deber�a ser reemplazado por la l�gica de creaci�n real)
			ABloques* NewBlock = GetWorld()->SpawnActor<ABloques>();
			if (NewBlock)
			{
				//NewBlock->InicializarBlock(BlockID, BlockType);
				BlocksMap.Add(BlockID, NewBlock);
			}
		}
	}
	// Spawnear bloques seg�n el patr�n
	

	
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
