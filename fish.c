#include <stdio.h>

struct exercise{
    const char *description;
    float duration;
};

struct meal{
    const char *ingredients;
    float weight;
};

struct preferences{
    const char *food;
    float exercise_hours;
};

struct fish{
    const char *name;
    const char *species;
    int teeth;
    int age;
    struct preferences care;
};

void catalog(struct fish f)
{
    printf("%s is a %s with %i teeth. He is %i\n", f.name, f.species, f.teeth, f.age);
}

int main()
{

    struct fish snappy = {"Snappy", "Piranha", 69, 4, {"Meat", 7.5}};

    catalog(snappy);
    printf("Snappy 喜欢吃 %s", snappy.care.food);
    printf("Snappy 喜欢锻炼 %f hours", snappy.care.exercise_hours);
    return 0;
}
