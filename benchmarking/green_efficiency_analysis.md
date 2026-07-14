# Green Efficiency Analysis

## Measurement Methodology

The program was instrumented using the C Standard Library `<time.h>` to measure CPU execution time. The `clock()` function was used to record timestamps before and after each major stage of the program: `build_dataset()`, `process_dataset()`, and `reduce_checksum()`. A separate pair of `clock()` calls was placed around the entire workload to measure the total execution time.

The elapsed time for each stage was calculated by subtracting the starting clock value from the ending clock value and dividing the result by `CLOCKS_PER_SEC`. This approach provides the CPU time consumed by each section of the program.

The recorded measurements were:

- **TOTAL seconds:** 0.001000
- **BUILD_DATA seconds:** 0.000000
- **PROCESS seconds:** 0.000000
- **REDUCE seconds:** 0.001000

These values were collected from the instrumented program without changing the original algorithms or program behavior.

## Observed Performance Differences

The measured results show that the total execution time of the program was **0.001000 seconds**. According to the recorded timings, both the `build_dataset()` and `process_dataset()` functions completed in **0.000000 seconds**, while the `reduce_checksum()` function accounted for **0.001000 seconds**.

Although the measurements appear to indicate that the checksum reduction consumed all measurable execution time, this should be interpreted carefully. The execution times of the first two functions were below the timing resolution available through `clock()` on this system. As a result, they were rounded to zero rather than indicating that they required no CPU time.

Overall, the experiment shows that the entire program executes very quickly, completing in approximately one millisecond.

## Relation Between Runtime and Energy Consumption

Execution time is commonly used as an indirect indicator of CPU energy consumption. A program that keeps the processor busy for a longer period generally consumes more energy than one that completes more quickly, assuming the same hardware and operating conditions.

Based on the recorded measurements, the `reduce_checksum()` stage had the largest measurable runtime and therefore would be expected to contribute the most to CPU energy usage in this experiment. However, because the measured times are extremely small, the differences between the stages cannot be considered highly precise.

The results suggest that reducing execution time can contribute to improved energy efficiency, but more accurate timing data would be needed to quantify the effect.

## Limitations of the Experiment

A significant limitation of this experiment is the limited timing resolution of the `clock()` function. Both `build_dataset()` and `process_dataset()` were reported as **0.000000 seconds**, indicating that they completed faster than the timer could accurately measure. Therefore, the recorded values do not necessarily represent the actual execution times of those functions.

Additionally, CPU scheduling, compiler optimization, background operating system activity, and hardware characteristics may influence timing results. The experiment also measured CPU execution time rather than actual electrical energy consumption.

## Practical Engineering Takeaway

This experiment demonstrates how instrumentation can be used to identify where execution time is spent within a program. Even though the measured times were very small, the instrumentation successfully measured the overall runtime and identified the only phase with a measurable execution time under the current conditions.

For more reliable performance analysis, engineers should increase the workload, repeat the measurements multiple times, or use higher-resolution profiling tools. Collecting accurate timing data allows optimization efforts to focus on the parts of a program that consume the most execution time, which can improve both performance and energy efficiency.
