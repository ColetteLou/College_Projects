// week 21.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>

struct patient
{
	int patientID;
	float temperature;
	int Pulse_rate;
	int Respiration_rate;
	int Blood_Pressure_Systolic;
	int Blood_Pressure_Diastolic;
};

void main(int argc, char *argv[])
{
	patient patients;
	FILE*fptr;

	patients.patientID = atoi(argv[1]);
	patients.temperature = atof(argv[2]);
	patients.Pulse_rate = atoi(argv[3]);
	patients.Respiration_rate = atoi(argv[4]);
	patients.Blood_Pressure_Systolic = atoi(argv[5]);
	patients.Blood_Pressure_Diastolic = atoi(argv[6]);

	fptr = fopen("F:\\Patients.txt", "a");
	fprintf(fptr,"%s\t%s\t%d\t%f\t%d\t%d\t%d\t%d\n", __DATE__, __TIME__,patients.patientID, patients.temperature, patients.Pulse_rate, patients.Respiration_rate, patients.Blood_Pressure_Systolic, patients.Blood_Pressure_Diastolic);

	fclose(fptr);

}
