//structure with fields with name. dob,address, get the values.
//#include <stdio.h>

#include <stdio.h>

int main(void)
{
    char firstname[20], lastname[20] ,street[20] ;

    int birth_year;     //Birthday  
    int zipcode;
    int apt;

    printf( "Input your firstname: " );    
    scanf ( "%s", firstname );
    printf( "Input your lastname: " );
    scanf ( "%s", lastname );
    printf( "Input your year of birth: " );
    scanf ( "%d", &birth_year );
    printf( "Input your street address: ");
    scanf ( "%s", street );
    printf( "Input your apt address: ");
    scanf ( "%d", &apt );
    printf( "Input your zip code: ");
    scanf ( "%d", &zipcode );

    printf( "%s %s %d\n", firstname, lastname, birth_year);
    printf( "%s %d %d\n", street, apt, zipcode);
    
    return 0; 