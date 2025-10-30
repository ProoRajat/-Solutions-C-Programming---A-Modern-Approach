#include <stdio.h>

int main(void)
{
    int GSIprefix, groupIdentifier, publisherCode, itemNumber, checkDigit;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &GSIprefix, &groupIdentifier, &publisherCode, &itemNumber, &checkDigit);

    printf("GSI prefix: %d\n", GSIprefix);
    printf("Group identifier: %d\n", groupIdentifier);
    printf("Publisher code: %d\n", publisherCode);
    printf("Item number: %d\n", itemNumber);
    printf("Check digit: %d\n", checkDigit);
    
    return 0;
}