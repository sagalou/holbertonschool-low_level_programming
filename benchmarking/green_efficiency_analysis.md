## Measurement Methodology
To analyze the computational efficiency and environmental impact of different programming approaches, we conducted performance benchmarks using the C programming language. The primary metric used was execution time, measured via the clock() function from the time.h library.

Each test was executed on a stable system to minimize background noise. We focused on three distinct scenarios: basic loops with modulo operations, a comparison between a nested-loop "naive" algorithm and a "single-pass" optimized algorithm, and a multi-step data processing pipeline (Build, Process, Reduce). The execution times were captured with microsecond precision (%.6f) to ensure that even near-instantaneous optimizations were visible.


## Observed Performance Differences
The most significant finding came from comparing the count_even algorithms. The Naive algorithm, which uses nested loops ($O(n^2)$ complexity), consistently averaged 3.53 seconds to process 50,000 elements. In stark contrast, the Single-pass algorithm ($O(n)$ complexity) averaged only 0.00012 seconds for the same dataset.In another test involving 100,000,000 iterations of a simple loop, the execution time was remarkably stable at approximately 0.287 seconds. These measurements demonstrate that the choice of algorithm structure is the most critical factor in performance, far outweighing simple hardware speed or compiler tweaks.


## Relation Between Runtime and Energy Consumption
There is a direct, linear correlation between CPU runtime and energy consumption. A processor consumes power ($P$) over a duration of time ($t$) to perform a task. The total energy ($E$) is defined by $E = P \times t$.In our experiment, the Naive algorithm kept the CPU in a high-power state for over 3.5 seconds. The Single-pass algorithm reduced this duration by a factor of nearly 29,000. Consequently, the energy required for the Single-pass version is virtually negligible compared to the Naive version. Reducing runtime doesn't just make a program "faster"—it directly reduces the carbon footprint of the server or device running the code by allowing the CPU to return to an idle, low-power state sooner.


## Limitations of the Experiment
While the data is clear, certain limitations apply to this analysis:

Clock Precision: The clock() function measures CPU time, which may not account for time spent waiting for I/O or system interrupts in more complex applications.

OS Interference: Even in a controlled environment, modern operating systems perform background tasks (updates, networking) that can cause slight fluctuations, as seen in our three iterations (ranging from 0.286s to 0.289s).

Hardware Abstraction: We measured time, not direct Joule consumption. Different CPU architectures (like ARM vs. x86) have different power-per-clock-cycle ratios.


## Practical Engineering Takeaway
The primary takeaway for a software engineer is that algorithmic optimization is the most effective form of "Green Engineering." While hardware becomes more efficient every year, a poorly designed $O(n^2)$ algorithm will always waste more energy than an optimized $O(n)$ equivalent, regardless of the machine's efficiency.Writing "Green Code" means choosing the right logic to minimize CPU cycles. As shown by our results, a simple change in how we traverse data can reduce energy waste by 99.99%, proving that sustainability in tech starts at the source code level.
"Optimization is not just about speed; it's about sustainability. Writing efficient C code is a direct way for a developer to contribute to 'Green Computing'."