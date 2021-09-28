//structure with fields with name. dob,address, get the values.
//#include <stdio.h>

int main(void)
{
    char firstname[], lastname[];

    int birth_year;

    printf( "Input your firstname: " );
    scanf ( "%s", firstname );
    printf( "Input your lastname: " );
    scanf ( "%s", lastname );
    printf( "Input your year of birth: " );
    scanf ( "%d", &birth_year );
    printf( "%s %s %d\n", firstname, lastname, birth_year );

    return 0;