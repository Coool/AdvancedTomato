#ifndef __ASM_OFFSETS_H__
#define __ASM_OFFSETS_H__
/*
 * DO NOT MODIFY.
 *
 * This file was generated by Kbuild
 *
 */

/* MIPS pt_regs offsets. */
#define PT_R0     24	
#define PT_R1     28	
#define PT_R2     32	
#define PT_R3     36	
#define PT_R4     40	
#define PT_R5     44	
#define PT_R6     48	
#define PT_R7     52	
#define PT_R8     56	
#define PT_R9     60	
#define PT_R10    64	
#define PT_R11    68	
#define PT_R12    72	
#define PT_R13    76	
#define PT_R14    80	
#define PT_R15    84	
#define PT_R16    88	
#define PT_R17    92	
#define PT_R18    96	
#define PT_R19    100	
#define PT_R20    104	
#define PT_R21    108	
#define PT_R22    112	
#define PT_R23    116	
#define PT_R24    120	
#define PT_R25    124	
#define PT_R26    128	
#define PT_R27    132	
#define PT_R28    136	
#define PT_R29    140	
#define PT_R30    144	
#define PT_R31    148	
#define PT_LO     160	
#define PT_HI     156	
#define PT_EPC    172	
#define PT_BVADDR 164	
#define PT_STATUS 152	
#define PT_CAUSE  168	
#define PT_SIZE   176	

/* MIPS task_struct offsets. */
#define TASK_STATE         0	
#define TASK_THREAD_INFO   4	
#define TASK_FLAGS         12	
#define TASK_MM            132	
#define TASK_PID           168	
#define TASK_STRUCT_SIZE   1024	

/* MIPS thread_info offsets. */
#define TI_TASK            0	
#define TI_EXEC_DOMAIN     4	
#define TI_FLAGS           8	
#define TI_TP_VALUE	   12	
#define TI_CPU             16	
#define TI_PRE_COUNT       20	
#define TI_ADDR_LIMIT      24	
#define TI_RESTART_BLOCK   32	
#define TI_REGS            64	
#define _THREAD_SIZE       0x2000	
#define _THREAD_MASK       0x1fff	

/* MIPS specific thread_struct offsets. */
#define THREAD_REG16   432	
#define THREAD_REG17   436	
#define THREAD_REG18   440	
#define THREAD_REG19   444	
#define THREAD_REG20   448	
#define THREAD_REG21   452	
#define THREAD_REG22   456	
#define THREAD_REG23   460	
#define THREAD_REG29   464	
#define THREAD_REG30   468	
#define THREAD_REG31   472	
#define THREAD_STATUS  476	
#define THREAD_FPU     480	
#define THREAD_BVADDR  772	
#define THREAD_BUADDR  776	
#define THREAD_ECODE   780	
#define THREAD_TRAPNO  784	
#define THREAD_MFLAGS  788	
#define THREAD_TRAMP   792	
#define THREAD_OLDCTX  796	

#define THREAD_FPR0    480	
#define THREAD_FPR1    488	
#define THREAD_FPR2    496	
#define THREAD_FPR3    504	
#define THREAD_FPR4    512	
#define THREAD_FPR5    520	
#define THREAD_FPR6    528	
#define THREAD_FPR7    536	
#define THREAD_FPR8    544	
#define THREAD_FPR9    552	
#define THREAD_FPR10   560	
#define THREAD_FPR11   568	
#define THREAD_FPR12   576	
#define THREAD_FPR13   584	
#define THREAD_FPR14   592	
#define THREAD_FPR15   600	
#define THREAD_FPR16   608	
#define THREAD_FPR17   616	
#define THREAD_FPR18   624	
#define THREAD_FPR19   632	
#define THREAD_FPR20   640	
#define THREAD_FPR21   648	
#define THREAD_FPR22   656	
#define THREAD_FPR23   664	
#define THREAD_FPR24   672	
#define THREAD_FPR25   680	
#define THREAD_FPR26   688	
#define THREAD_FPR27   696	
#define THREAD_FPR28   704	
#define THREAD_FPR29   712	
#define THREAD_FPR30   720	
#define THREAD_FPR31   728	
#define THREAD_FCR31   736	

/* Size of struct page  */
#define STRUCT_PAGE_SIZE   32	

/* Linux mm_struct offsets. */
#define MM_USERS      40	
#define MM_PGD        36	
#define MM_CONTEXT    344	

#define _PAGE_SIZE     0x1000	
#define _PAGE_SHIFT    0xc	

#define _PGD_T_SIZE    0x4	
#define _PMD_T_SIZE    0x4	
#define _PTE_T_SIZE    0x4	

#define _PGD_T_LOG2    0x2	
#define _PMD_T_LOG2    0x2	
#define _PTE_T_LOG2    0x2	

#define _PMD_SHIFT     0x16	
#define _PGDIR_SHIFT   0x16	

#define _PTRS_PER_PGD  0x400	
#define _PTRS_PER_PMD  0x1	
#define _PTRS_PER_PTE  0x400	

/* Linux sigcontext offsets. */
#define SC_REGS       16	
#define SC_FPREGS     272	
#define SC_ACX        528	
#define SC_MDHI       552	
#define SC_MDLO       560	
#define SC_PC         8	
#define SC_FPC_CSR    532	
#define SC_FPC_EIR    536	
#define SC_HI1        568	
#define SC_LO1        572	
#define SC_HI2        576	
#define SC_LO2        580	
#define SC_HI3        584	
#define SC_LO3        588	

/* Linux signal numbers. */
#define _SIGHUP     0x1	
#define _SIGINT     0x2	
#define _SIGQUIT    0x3	
#define _SIGILL     0x4	
#define _SIGTRAP    0x5	
#define _SIGIOT     0x6	
#define _SIGABRT    0x6	
#define _SIGEMT     0x7	
#define _SIGFPE     0x8	
#define _SIGKILL    0x9	
#define _SIGBUS     0xa	
#define _SIGSEGV    0xb	
#define _SIGSYS     0xc	
#define _SIGPIPE    0xd	
#define _SIGALRM    0xe	
#define _SIGTERM    0xf	
#define _SIGUSR1    0x10	
#define _SIGUSR2    0x11	
#define _SIGCHLD    0x12	
#define _SIGPWR     0x13	
#define _SIGWINCH   0x14	
#define _SIGURG     0x15	
#define _SIGIO      0x16	
#define _SIGSTOP    0x17	
#define _SIGTSTP    0x18	
#define _SIGCONT    0x19	
#define _SIGTTIN    0x1a	
#define _SIGTTOU    0x1b	
#define _SIGVTALRM  0x1c	
#define _SIGPROF    0x1d	
#define _SIGXCPU    0x1e	
#define _SIGXFSZ    0x1f	

/* Linux irq_cpustat_t offsets. */
#define IC_SOFTIRQ_PENDING 0	
#define IC_IRQ_CPUSTAT_T   32	

/* MIPS struct gdb_regs offsets. */
#define GDB_FR_REG0     24	
#define GDB_FR_REG1     28	
#define GDB_FR_REG2     32	
#define GDB_FR_REG3     36	
#define GDB_FR_REG4     40	
#define GDB_FR_REG5     44	
#define GDB_FR_REG6     48	
#define GDB_FR_REG7     52	
#define GDB_FR_REG8     56	
#define GDB_FR_REG9     60	
#define GDB_FR_REG10    64	
#define GDB_FR_REG11    68	
#define GDB_FR_REG12    72	
#define GDB_FR_REG13    76	
#define GDB_FR_REG14    80	
#define GDB_FR_REG15    84	
#define GDB_FR_REG16    88	
#define GDB_FR_REG17    92	
#define GDB_FR_REG18    96	
#define GDB_FR_REG19    100	
#define GDB_FR_REG20    104	
#define GDB_FR_REG21    108	
#define GDB_FR_REG22    112	
#define GDB_FR_REG23    116	
#define GDB_FR_REG24    120	
#define GDB_FR_REG25    124	
#define GDB_FR_REG26    128	
#define GDB_FR_REG27    132	
#define GDB_FR_REG28    136	
#define GDB_FR_REG29    140	
#define GDB_FR_REG30    144	
#define GDB_FR_REG31    148	

#define GDB_FR_STATUS   152	
#define GDB_FR_HI       156	
#define GDB_FR_LO       160	
#define GDB_FR_BADVADDR 164	
#define GDB_FR_CAUSE    168	
#define GDB_FR_EPC      172	

#define GDB_FR_FPR0        176	
#define GDB_FR_FPR1        180	
#define GDB_FR_FPR2        184	
#define GDB_FR_FPR3        188	
#define GDB_FR_FPR4        192	
#define GDB_FR_FPR5        196	
#define GDB_FR_FPR6        200	
#define GDB_FR_FPR7        204	
#define GDB_FR_FPR8        208	
#define GDB_FR_FPR9        212	
#define GDB_FR_FPR10        216	
#define GDB_FR_FPR11        220	
#define GDB_FR_FPR12        224	
#define GDB_FR_FPR13        228	
#define GDB_FR_FPR14        232	
#define GDB_FR_FPR15        236	
#define GDB_FR_FPR16        240	
#define GDB_FR_FPR17        244	
#define GDB_FR_FPR18        248	
#define GDB_FR_FPR19        252	
#define GDB_FR_FPR20        256	
#define GDB_FR_FPR21        260	
#define GDB_FR_FPR22        264	
#define GDB_FR_FPR23        268	
#define GDB_FR_FPR24        272	
#define GDB_FR_FPR25        276	
#define GDB_FR_FPR26        280	
#define GDB_FR_FPR27        284	
#define GDB_FR_FPR28        288	
#define GDB_FR_FPR29        292	
#define GDB_FR_FPR30        296	
#define GDB_FR_FPR31        300	

#define GDB_FR_FSR          304	
#define GDB_FR_FIR          308	
#define GDB_FR_FRP          312	
#define GDB_FR_DUMMY        316	
#define GDB_FR_CP0_INDEX    320	
#define GDB_FR_CP0_RANDOM   324	
#define GDB_FR_CP0_ENTRYLO0 328	
#define GDB_FR_CP0_ENTRYLO1 332	
#define GDB_FR_CP0_CONTEXT  336	
#define GDB_FR_CP0_PAGEMASK 340	
#define GDB_FR_CP0_WIRED    344	
#define GDB_FR_CP0_REG7     348	
#define GDB_FR_CP0_REG8     352	
#define GDB_FR_CP0_REG9     356	
#define GDB_FR_CP0_ENTRYHI  360	
#define GDB_FR_CP0_REG11    364	
#define GDB_FR_CP0_REG12    368	
#define GDB_FR_CP0_REG13    372	
#define GDB_FR_CP0_REG14    376	
#define GDB_FR_CP0_PRID     380	
#define GDB_FR_SIZE         384	

#endif