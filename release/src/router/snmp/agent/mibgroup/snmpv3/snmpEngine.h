/*
 * snmpEngine.h
 *
 * This file was generated by mib2c and is intended for use as a mib module
 * for the ucd-snmp snmpd agent.
 */


#ifndef _MIBGROUP_SNMPENGINE_H
#define _MIBGROUP_SNMPENGINE_H

/*
 * we use header_generic and checkmib from the util_funcs module 
 */

config_require(util_funcs)
config_add_mib(SNMP-FRAMEWORK-MIB)

    /*
     * Magic number definitions: 
     */
#define   SNMPENGINEID          1
#define   SNMPENGINEBOOTS       2
#define   SNMPENGINETIME        3
#define   SNMPENGINEMAXMESSAGESIZE  4
    /*
     * function definitions 
     */
     extern void     init_snmpEngine(void);
     extern FindVarMethod var_snmpEngine;

#endif                          /* _MIBGROUP_SNMPENGINE_H */