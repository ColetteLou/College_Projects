#include "stdafx.h"
#include <stdio.h>
#include "string.h"
#include "stdlib.h"

typedef struct
{
	char userName[50];
	char firstName[50];
	char lastName[50];
	char displayName[50];
	char jobTitle[50];
	char department[50];
	long officeNumber;
	char officePhone[20];
	char mobilePhone[20];
	char fax[20];
	char address[20];
	char city[20];
	char stateProvence[20];
	long postalCode;
	char countryRegion[20];

} Staff;

Staff* staffMembers[200];
void printResult(Staff* aStaffMembers);
int readFile(char *fileName);

int main()
{
	char fileName[] = "F:\\contacts.txt";
	int i = 0;
	if (!readFile(fileName))
	{
		printf("File could not be opened !!\n");
		return 0;
	}

	while (staffMembers[i] != NULL)
	{
		printResult(staffMembers[i]);
		i++;
	}

	return 0;
}

void printResult(Staff* aStaffMembers)
{
	printf("Username: %s\nFirstname:%s\nLastname: %s\nDisplayname: %s\nJobtitle: %s\nDepartment: %s\nOfficeNumber: %d\nOfficePhone: %s\nMobilePhone: %s\nFax:%s\nAddress: %s\nCity: %s\nState or Province: %s\nPostal Code: %d\nCountry: %s\n\n\n", aStaffMembers->userName, aStaffMembers->firstName, aStaffMembers->lastName, aStaffMembers->displayName, aStaffMembers->jobTitle, aStaffMembers->department, aStaffMembers->officeNumber, aStaffMembers->officePhone,
		aStaffMembers->mobilePhone, aStaffMembers->fax, aStaffMembers->address, aStaffMembers->city, aStaffMembers->stateProvence, aStaffMembers->postalCode, aStaffMembers->countryRegion);
}

int readFile(char *fileName)
{

	FILE*fptr;
	fptr = fopen(fileName, "r");
	char line[200];
	int i = 0;
	char *token;
	char delim[2] = ",";
	

	fgets(line, 200, fptr);


	while (!feof(fptr))
	{
		staffMembers[i] = (Staff*)malloc(sizeof(Staff));
		fgets(line, 200, fptr);
		if ((token = strtok(line, delim)) != NULL) strcpy(staffMembers[i]->userName, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->firstName, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->lastName, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->displayName, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->jobTitle, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->department, token);
		if ((token = strtok(NULL, delim)) != NULL) staffMembers[i]->officeNumber = atof(token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->officePhone, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->mobilePhone, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->fax, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->address, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->city, token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->stateProvence, token);
		if ((token = strtok(NULL, delim)) != NULL) staffMembers[i]->postalCode = atof(token);
		if ((token = strtok(NULL, delim)) != NULL) strcpy(staffMembers[i]->countryRegion, token);
		
		i++;


	}

	fclose(fptr);
	return 1;
}
