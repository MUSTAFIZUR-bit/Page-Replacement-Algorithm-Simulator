#include <stdio.h>
#include <limits.h>

int findPage(int frames[], int f, int page) {
    int i;
    for (i = 0; i < f; i++) {
        if (frames[i] == page)
            return i;
    }
    return -1;
}

void printFrames(int frames[], int f) {
    int i;
    for (i = 0; i < f; i++) {
        if (frames[i] == -1)
            printf("[ ] ");
        else
            printf("[%d] ", frames[i]);
    }
    printf("\n");
}

/* ================= FIFO ================= */
int FIFO(int ref[], int n, int f) {
    int frames[20];
    int i, pos = 0, faults = 0;

    for (i = 0; i < f; i++)
        frames[i] = -1;

    printf("\n--- FIFO Algorithm ---\n");

    for (i = 0; i < n; i++) {
        printf("Request: %d -> ", ref[i]);

        if (findPage(frames, f, ref[i]) == -1) {
            frames[pos] = ref[i];
            pos = (pos + 1) % f;
            faults++;
            printf("FAULT | ");
        } else {
            printf("HIT   | ");
        }

        printFrames(frames, f);
    }

    return faults;
}



/* ================= MAIN ================= */
int main() {
    int ref[50], n, f;
    int i;

    printf("Enter number of references: ");
    scanf("%d", &n);

    printf("Enter reference string: ");
    for (i = 0; i < n; i++)
        scanf("%d", &ref[i]);

    printf("Enter number of frames: ");
    scanf("%d", &f);

    int fifoFaults = FIFO(ref, n, f);
    int lruFaults = LRU(ref, n, f);
    int optFaults = Optimal(ref, n, f);

    printf("\n======= RESULT SUMMARY =======\n");
    printf("FIFO Faults   : %d\n", fifoFaults);
    printf("LRU Faults    : %d\n", lruFaults);
    printf("Optimal Faults: %d\n", optFaults);

    return 0;
}
