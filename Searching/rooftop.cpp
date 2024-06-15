int maxStep(int A[], int N) {
    int max_steps = 0;
    int current_steps = 0;

    for (int i = 1; i < N; ++i) {
        // If the current building is higher than the previous one
        if (A[i] > A[i - 1]) {
            // Increase the current step count
            current_steps++;
            // Update the maximum steps if current steps are greater
            if (current_steps > max_steps) {
                max_steps = current_steps;
            }
        } else {
            // Reset current steps if the sequence is broken
            current_steps = 0;
        }
    }
    return max_steps;
}
