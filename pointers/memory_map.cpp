// Virtual memory is a technique that allows programs to think
// that it is the only program running on your OS, and all memory resources belong to it.

// Each program is abstracted into a process, and each process has access to the memory range 0 ~ 2^n-1. Where n is 32 or 64, depends on your processor architecture.

// The entire program is not loaded in real memory by the CPU and MMU.
// Only parts that are about to be executed are loaded. Making effective use of real memory.

// The memory map is a standard format defined by the OS.
// All programs written to that OS must conform to it. It is usually divided into some sections.so