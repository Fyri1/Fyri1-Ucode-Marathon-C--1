
// clang -std=c11 -Wall -Wextra -Werror -Wpedantic -o mx_selection_sort mx_selection_sort.c
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
int mx_selection_sort(char**arr, int size);

int mx_selection_sort(char **arr, int size){
    int counter = 0;
    
    for(int i = 0; i < size - 1; i++){
        int min = i;
        for(int j = i + 1; j < size; j++){
            if(mx_strlen(arr[j]) < mx_strlen(arr[min]))
                min = j;
            else if(mx_strlen(arr[j]) == mx_strlen(arr[min])){
                if (mx_strcmp(arr[j], arr[min]) < 0)
                    min = j;
            }
        } 
        if (mx_strcmp(arr[min], arr[i]) != '\0'){
            counter++;
            char *tmp = arr[i];
            arr[i] = arr[min];
            arr[min] = tmp;
        }
    }
    return counter;

}


