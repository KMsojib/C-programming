int main() {
    // margin array
    int n;
    scanf("%d", &n);
    int a[n], b[n], c[n*2];

    for (int i = 0; i<n; i++)
        scanf("%d", &a[i]);

    for (int i = 0; i<n; i++)
        scanf("%d", &b[i]);

    int index = 0;
    for(int i = 0; i<n; i++) {
        c[index] = a[i];
        index++;
    }

    for(int i = 0; i<n; i++) {
        c[index] = b[i];
        index++;
    }


    for(int i = 0; i<n*2; i++) {
        printf("%d ", c[i]);
    }
    return 0;
}


