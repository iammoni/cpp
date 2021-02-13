def gridlandMetro(n, m, k, track):
    track.sort(key = lambda track: min(track[1], track[2])) # O(nlogn)
    running_total = 0
    last_col_end_by_rows = {}

    
    for row, col_start, col_end in track:
        if col_end < col_start:
            col_start, col_end = col_end, col_start 
        if not last_col_end_by_rows.get(row):
            last_col_end_by_rows[row] = col_end
            running_total += col_end - col_start + 1
        else:
            last_col_end_for_row = last_col_end_by_rows[row]
            if last_col_end_for_row < col_start: 
                last_col_end_by_rows[row] = col_end
                running_total += col_end - col_start + 1
            elif last_col_end_for_row < col_end: 
                last_col_end_by_rows[row] = col_end
                running_total += col_end - last_col_end_for_row
            else: 
                continue
    return n * m - running_total