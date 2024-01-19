class Solution:
    def repeatedRows(self, arr, m ,n):
        #code here
        seen_rows = {}  # Dictionary to store unique rows and their first occurrence indices
        duplicate_rows = []

        for i in range(m):
            row_str = "".join(map(str, arr[i]))  # Convert row to string for efficient comparison
            if row_str in seen_rows:
                duplicate_rows.append(i)  # Add to duplicate list if already seen
            else:
                seen_rows[row_str] = i  # Store first occurrence index

        return duplicate_rows
