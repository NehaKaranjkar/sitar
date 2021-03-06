/** \file
 *  This C header file was generated by $ANTLR version 3.4
 *
 *     -  From the grammar source file : /home/nehak/Projects/sitar/translator/grammar/sitar.g
 *     -                            On : 2017-04-30 16:08:14
 *     -                for the parser : sitarParserParser
 *
 * Editing it, at least manually, is not wise.
 *
 * C language generator and runtime by Jim Idle, jimi|hereisanat|idle|dotgoeshere|ws.
 *
 *
 * The parser 
sitarParser

has the callable functions (rules) shown below,
 * which will invoke the code for the associated rule in the source grammar
 * assuming that the input stream is pointing to a token/text stream that could begin
 * this rule.
 *
 * For instance if you call the first (topmost) rule in a parser grammar, you will
 * get the results of a full parse, but calling a rule half way through the grammar will
 * allow you to pass part of a full token stream to the parser, such as for syntax checking
 * in editors and so on.
 *
 * The parser entry points are called indirectly (by function pointer to function) via
 * a parser context typedef psitarParser, which is returned from a call to sitarParserNew().
 *
 * The methods in psitarParser are  as follows:
 *
 *  - 
 void
      psitarParser->top(psitarParser)
 *  - 
 void
      psitarParser->design_unit(psitarParser)
 *  - 
 void
      psitarParser->du(psitarParser)
 *  - 
 void
      psitarParser->module_definition(psitarParser)
 *  - 
 void
      psitarParser->procedure_definition(psitarParser)
 *  - 
 void
      psitarParser->module_body(psitarParser)
 *  - 
 void
      psitarParser->procedure_body(psitarParser)
 *  - 
 void
      psitarParser->code_block_regions(psitarParser)
 *  - 
 void
      psitarParser->include_block(psitarParser)
 *  - 
 void
      psitarParser->declaration_block(psitarParser)
 *  - 
 void
      psitarParser->initialization_block(psitarParser)
 *  - 
 void
      psitarParser->structural_component_declaration(psitarParser)
 *  - 
 void
      psitarParser->parameter_declaration_region(psitarParser)
 *  - 
 void
      psitarParser->parameter_declaration(psitarParser)
 *  - 
 sitarParser_param_type_return
      psitarParser->param_type(psitarParser)
 *  - 
 sitarParser_default_value_return
      psitarParser->default_value(psitarParser)
 *  - 
 void
      psitarParser->integer(psitarParser)
 *  - 
 void
      psitarParser->port_declaration(psitarParser)
 *  - 
 void
      psitarParser->inport_declaration(psitarParser)
 *  - 
 void
      psitarParser->inport_array_declaration(psitarParser)
 *  - 
 void
      psitarParser->outport_declaration(psitarParser)
 *  - 
 void
      psitarParser->outport_array_declaration(psitarParser)
 *  - 
 void
      psitarParser->net_declaration(psitarParser)
 *  - 
 void
      psitarParser->simple_net_declaration(psitarParser)
 *  - 
 void
      psitarParser->net_array_declaration(psitarParser)
 *  - 
 void
      psitarParser->submodule_declaration(psitarParser)
 *  - 
 void
      psitarParser->simple_submodule_declaration(psitarParser)
 *  - 
 sitarParser_template_arguments_return
      psitarParser->template_arguments(psitarParser)
 *  - 
 void
      psitarParser->argument(psitarParser)
 *  - 
 void
      psitarParser->submodule_array_declaration(psitarParser)
 *  - 
 void
      psitarParser->procedure_declaration(psitarParser)
 *  - 
 void
      psitarParser->connection(psitarParser)
 *  - 
 void
      psitarParser->simple_connect_statement(psitarParser)
 *  - 
 sitarParser_port_instance_name_return
      psitarParser->port_instance_name(psitarParser)
 *  - 
 sitarParser_net_instance_name_return
      psitarParser->net_instance_name(psitarParser)
 *  - 
 void
      psitarParser->hierarchical_instance_name(psitarParser)
 *  - 
 void
      psitarParser->object_name(psitarParser)
 *  - 
 void
      psitarParser->for_loop_for_connections(psitarParser)
 *  - 
 sitarParser_expression_return
      psitarParser->expression(psitarParser)
 *  - 
 void
      psitarParser->term(psitarParser)
 *  - 
 void
      psitarParser->signed_expression(psitarParser)
 *  - 
 void
      psitarParser->atomic_expression(psitarParser)
 *  - 
 void
      psitarParser->behavior_block(psitarParser)
 *  - 
 void
      psitarParser->cf(psitarParser)
 *  - 
 int
      psitarParser->sequence(psitarParser)
 *  - 
 int
      psitarParser->statement(psitarParser)
 *  - 
 void
      psitarParser->atomic_statement(psitarParser)
 *  - 
 void
      psitarParser->code_block_statement(psitarParser)
 *  - 
 void
      psitarParser->behavior_code_block_statement(psitarParser)
 *  - 
 void
      psitarParser->declaration_block_statement(psitarParser)
 *  - 
 void
      psitarParser->initialization_block_statement(psitarParser)
 *  - 
 void
      psitarParser->includes_block_statement(psitarParser)
 *  - 
 void
      psitarParser->nothing_statement(psitarParser)
 *  - 
 void
      psitarParser->wait_statement(psitarParser)
 *  - 
 void
      psitarParser->wait_until(psitarParser)
 *  - 
 void
      psitarParser->wait_for_time(psitarParser)
 *  - 
 void
      psitarParser->single_wait(psitarParser)
 *  - 
 void
      psitarParser->stop_statement(psitarParser)
 *  - 
 void
      psitarParser->stop_behavior(psitarParser)
 *  - 
 void
      psitarParser->stop_simulation(psitarParser)
 *  - 
 void
      psitarParser->run_procedure_statement(psitarParser)
 *  - 
 void
      psitarParser->compound_statement(psitarParser)
 *  - 
 void
      psitarParser->if_statement(psitarParser)
 *  - 
 void
      psitarParser->do_while_statement(psitarParser)
 *  - 
 void
      psitarParser->parallel_statement(psitarParser)
 *  - 
 std::string
      psitarParser->expression_cf(psitarParser)
 *  - 
 std::string
      psitarParser->exp1(psitarParser)
 *  - 
 std::string
      psitarParser->exp2(psitarParser)
 *  - 
 std::string
      psitarParser->exp3(psitarParser)
 *  - 
 std::string
      psitarParser->exp4(psitarParser)
 *  - 
 std::string
      psitarParser->exp5(psitarParser)
 *  - 
 std::string
      psitarParser->exp6(psitarParser)
 *  - 
 sitarParser_comparison_operator_return
      psitarParser->comparison_operator(psitarParser)
 *  - 
 sitarParser_add_operator_return
      psitarParser->add_operator(psitarParser)
 *  - 
 sitarParser_mul_operator_return
      psitarParser->mul_operator(psitarParser)
 *  - 
 std::string
      psitarParser->atomic_expression_cf(psitarParser)
 *  - 
 sitarParser_expression_code_block_return
      psitarParser->expression_code_block(psitarParser)
 *  - 
 sitarParser_function_call_return
      psitarParser->function_call(psitarParser)
 *  - 
 std::string
      psitarParser->argument_list(psitarParser)
 *  - 
 std::string
      psitarParser->this_cycle(psitarParser)
 *  - 
 std::string
      psitarParser->this_phase(psitarParser)
 *  - 
 sitarParser_code_block_with_info_return
      psitarParser->code_block_with_info(psitarParser)
 *  - 
 sitarParser_code_block_return
      psitarParser->code_block(psitarParser)
 *  - 
 sitarParser_identifier_return
      psitarParser->identifier(psitarParser)
 *
 * The return type for any particular rule is of course determined by the source
 * grammar file.
 */
// [The "BSD license"]
// Copyright (c) 2005-2009 Jim Idle, Temporal Wave LLC
// http://www.temporal-wave.com
// http://www.linkedin.com/in/jimidle
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
// 3. The name of the author may not be used to endorse or promote products
//    derived from this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS OR
// IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES
// OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED.
// IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY DIRECT, INDIRECT,
// INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT
// NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF
// THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#ifndef	_sitarParser_H
#define _sitarParser_H

#include<iostream>
#include<map>
#include<list>
#include<set>
#include<string>
#include<sstream>
#include<fstream>
#include<cassert>
#include<algorithm>
#include "GlobalData.h" //Data structure written to by parser, and read by code generator
#include "CodeGen.h"    //code generator class.
 
/* =============================================================================
 * Standard antlr3 C runtime definitions
 */
#include    <antlr3.h>

/* End of standard antlr 3 runtime definitions
 * =============================================================================
 */

#define GDATA  (CTX->_globalData)
#define CODEGEN (CTX->_codeGen)
//Files for dumping sections of code for each design unit
#define C_file (CTX->_globalData->C_file) //Constructor
#define D_file (CTX->_globalData->D_file) //Declarations
#define E_file (CTX->_globalData->E_file) //Function to execute controlFlow
#define I_file (CTX->_globalData->I_file) //Includes block
//#define OUTPUT_FILE_PREFIX sitar_
//#define OUTPUT_FILE_PREFIX_STR "sitar_"
#define OUTPUT_FILE_PREFIX  
#define OUTPUT_FILE_PREFIX_STR ""



#ifdef __cplusplus
extern "C" {
#endif

// Forward declare the context typedef so that we can use it before it is
// properly defined. Delegators and delegates (from import statements) are
// interdependent and their context structures contain pointers to each other
// C only allows such things to be declared if you pre-declare the typedef.
//
typedef struct sitarParser_Ctx_struct sitarParser, * psitarParser;



#ifdef	ANTLR3_WINDOWS
// Disable: Unreferenced parameter,							- Rules with parameters that are not used
//          constant conditional,							- ANTLR realizes that a prediction is always true (synpred usually)
//          initialized but unused variable					- tree rewrite variables declared but not needed
//          Unreferenced local variable						- lexer rule declares but does not always use _type
//          potentially unitialized variable used			- retval always returned from a rule
//			unreferenced local function has been removed	- susually getTokenNames or freeScope, they can go without warnigns
//
// These are only really displayed at warning level /W4 but that is the code ideal I am aiming at
// and the codegen must generate some of these warnings by necessity, apart from 4100, which is
// usually generated when a parser rule is given a parameter that it does not use. Mostly though
// this is a matter of orthogonality hence I disable that one.
//
#pragma warning( disable : 4100 )
#pragma warning( disable : 4101 )
#pragma warning( disable : 4127 )
#pragma warning( disable : 4189 )
#pragma warning( disable : 4505 )
#pragma warning( disable : 4701 )
#endif
typedef struct sitarParser_param_type_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_param_type_return;



typedef struct sitarParser_default_value_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_default_value_return;



typedef struct sitarParser_template_arguments_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_template_arguments_return;



typedef struct sitarParser_port_instance_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_port_instance_name_return;



typedef struct sitarParser_net_instance_name_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_net_instance_name_return;



typedef struct sitarParser_expression_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_expression_return;



typedef struct sitarParser_comparison_operator_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_comparison_operator_return;



typedef struct sitarParser_add_operator_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_add_operator_return;



typedef struct sitarParser_mul_operator_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
}
    sitarParser_mul_operator_return;



typedef struct sitarParser_expression_code_block_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    std::string text;
    int line;
}
    sitarParser_expression_code_block_return;



typedef struct sitarParser_function_call_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    std::string text;
    int line;
}
    sitarParser_function_call_return;



typedef struct sitarParser_code_block_with_info_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    std::string text;
    int line;
}
    sitarParser_code_block_with_info_return;



typedef struct sitarParser_code_block_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    std::string text;
    int line;
}
    sitarParser_code_block_return;



typedef struct sitarParser_identifier_return_struct
{
    /** Generic return elements for ANTLR3 rules that are not in tree parsers or returning trees
     */
    pANTLR3_COMMON_TOKEN    start;
    pANTLR3_COMMON_TOKEN    stop;
    int line;
}
    sitarParser_identifier_return;




/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the top scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  sitarParser_topPush().
 */
typedef struct  sitarParser_top_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct sitarParser_top_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    std::set<std::string>* design_unit_names_list;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    sitarParser_top_SCOPE, * psitarParser_top_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the du scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  sitarParser_duPush().
 */
typedef struct  sitarParser_du_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct sitarParser_du_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    std::string* design_unit_name;
    bool	is_module;
    bool	has_parameters;
    bool	has_behavior;
    int num_pointers;
    int num_timers;
    int num_if_flags;
    std::string* filename_h;
    std::string* filename_cpp;
    std::string* header_guard;
    std::string* template_class;
    std::string* template_member;
    std::string* template_args;
    std::list<std::string>*	param_name;
    std::list<std::string>*	param_type;
    std::list<std::string>*	param_value;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    sitarParser_du_SCOPE, * psitarParser_du_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the port_declaration scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  sitarParser_port_declarationPush().
 */
typedef struct  sitarParser_port_declaration_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct sitarParser_port_declaration_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    bool has_width;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    sitarParser_port_declaration_SCOPE, * psitarParser_port_declaration_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the net_declaration scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  sitarParser_net_declarationPush().
 */
typedef struct  sitarParser_net_declaration_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct sitarParser_net_declaration_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    bool has_width;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    sitarParser_net_declaration_SCOPE, * psitarParser_net_declaration_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the cf scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  sitarParser_cfPush().
 */
typedef struct  sitarParser_cf_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct sitarParser_cf_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    int pointer_count;
    int timer_count;
    int if_flag_count;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    sitarParser_cf_SCOPE, * psitarParser_cf_SCOPE;


/* ruleAttributeScopeDecl(scope)
 */
/* makeScopeSet()
 */
 /** Definition of the statement scope variable tracking
 *  structure. An instance of this structure is created by calling
 *  sitarParser_statementPush().
 */
typedef struct  sitarParser_statement_SCOPE_struct
{
    /** Function that the user may provide to be called when the
     *  scope is destroyed (so you can free pANTLR3_HASH_TABLES and so on)
     *
     * \param POinter to an instance of this typedef/struct
     */
    void    (ANTLR3_CDECL *free)	(struct sitarParser_statement_SCOPE_struct * frame);

    /* =============================================================================
     * Programmer defined variables...
     */
    int p;
    int k;
    int last_case;

    /* End of programmer defined variables
     * =============================================================================
     */
}
    sitarParser_statement_SCOPE, * psitarParser_statement_SCOPE;


/** Context tracking structure for 
sitarParser

 */
struct sitarParser_Ctx_struct
{
    /** Built in ANTLR3 context tracker contains all the generic elements
     *  required for context tracking.
     */
    pANTLR3_PARSER   pParser;
    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  top stack for use by psitarParser_topPush()
     *  and psitarParser_topPop()
     */
    pANTLR3_STACK psitarParser_topStack;
    ANTLR3_UINT32 psitarParser_topStack_limit;
    psitarParser_top_SCOPE   (*psitarParser_topPush)(struct sitarParser_Ctx_struct * ctx);
    psitarParser_top_SCOPE   psitarParser_topTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  du stack for use by psitarParser_duPush()
     *  and psitarParser_duPop()
     */
    pANTLR3_STACK psitarParser_duStack;
    ANTLR3_UINT32 psitarParser_duStack_limit;
    psitarParser_du_SCOPE   (*psitarParser_duPush)(struct sitarParser_Ctx_struct * ctx);
    psitarParser_du_SCOPE   psitarParser_duTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  port_declaration stack for use by psitarParser_port_declarationPush()
     *  and psitarParser_port_declarationPop()
     */
    pANTLR3_STACK psitarParser_port_declarationStack;
    ANTLR3_UINT32 psitarParser_port_declarationStack_limit;
    psitarParser_port_declaration_SCOPE   (*psitarParser_port_declarationPush)(struct sitarParser_Ctx_struct * ctx);
    psitarParser_port_declaration_SCOPE   psitarParser_port_declarationTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  net_declaration stack for use by psitarParser_net_declarationPush()
     *  and psitarParser_net_declarationPop()
     */
    pANTLR3_STACK psitarParser_net_declarationStack;
    ANTLR3_UINT32 psitarParser_net_declarationStack_limit;
    psitarParser_net_declaration_SCOPE   (*psitarParser_net_declarationPush)(struct sitarParser_Ctx_struct * ctx);
    psitarParser_net_declaration_SCOPE   psitarParser_net_declarationTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  cf stack for use by psitarParser_cfPush()
     *  and psitarParser_cfPop()
     */
    pANTLR3_STACK psitarParser_cfStack;
    ANTLR3_UINT32 psitarParser_cfStack_limit;
    psitarParser_cf_SCOPE   (*psitarParser_cfPush)(struct sitarParser_Ctx_struct * ctx);
    psitarParser_cf_SCOPE   psitarParser_cfTop;


    /* ruleAttributeScopeDef(scope)
     */
    /** Pointer to the  statement stack for use by psitarParser_statementPush()
     *  and psitarParser_statementPop()
     */
    pANTLR3_STACK psitarParser_statementStack;
    ANTLR3_UINT32 psitarParser_statementStack_limit;
    psitarParser_statement_SCOPE   (*psitarParser_statementPush)(struct sitarParser_Ctx_struct * ctx);
    psitarParser_statement_SCOPE   psitarParser_statementTop;




     void
     (*top)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*design_unit)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*du)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*module_definition)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*procedure_definition)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*module_body)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*procedure_body)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*code_block_regions)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*include_block)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*declaration_block)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*initialization_block)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*structural_component_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*parameter_declaration_region)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*parameter_declaration)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_param_type_return
     (*param_type)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_default_value_return
     (*default_value)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*integer)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*port_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*inport_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*inport_array_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*outport_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*outport_array_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*net_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*simple_net_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*net_array_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*submodule_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*simple_submodule_declaration)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_template_arguments_return
     (*template_arguments)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*argument)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*submodule_array_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*procedure_declaration)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*connection)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*simple_connect_statement)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_port_instance_name_return
     (*port_instance_name)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_net_instance_name_return
     (*net_instance_name)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*hierarchical_instance_name)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*object_name)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*for_loop_for_connections)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_expression_return
     (*expression)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*term)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*signed_expression)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*atomic_expression)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*behavior_block)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*cf)	(struct sitarParser_Ctx_struct * ctx);

     int
     (*sequence)	(struct sitarParser_Ctx_struct * ctx, int p);

     int
     (*statement)	(struct sitarParser_Ctx_struct * ctx, int p_, int k_);

     void
     (*atomic_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*code_block_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*behavior_code_block_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*declaration_block_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*initialization_block_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*includes_block_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*nothing_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*wait_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*wait_until)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*wait_for_time)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*single_wait)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*stop_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*stop_behavior)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*stop_simulation)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*run_procedure_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*compound_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*if_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*do_while_statement)	(struct sitarParser_Ctx_struct * ctx);

     void
     (*parallel_statement)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*expression_cf)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*exp1)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*exp2)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*exp3)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*exp4)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*exp5)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*exp6)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_comparison_operator_return
     (*comparison_operator)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_add_operator_return
     (*add_operator)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_mul_operator_return
     (*mul_operator)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*atomic_expression_cf)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_expression_code_block_return
     (*expression_code_block)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_function_call_return
     (*function_call)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*argument_list)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*this_cycle)	(struct sitarParser_Ctx_struct * ctx);

     std::string
     (*this_phase)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_code_block_with_info_return
     (*code_block_with_info)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_code_block_return
     (*code_block)	(struct sitarParser_Ctx_struct * ctx);

     sitarParser_identifier_return
     (*identifier)	(struct sitarParser_Ctx_struct * ctx);
    // Delegated rules

    const char * (*getGrammarFileName)();
    void            (*reset)  (struct sitarParser_Ctx_struct * ctx);
    void	    (*free)   (struct sitarParser_Ctx_struct * ctx);

    // A pointer to the global data structure
    //The parser fills in data into a global data structure, which is then read
    //by the code generator. We need to point out this global data structure to this parser.
    GlobalData* _globalData;
    CodeGen* _codeGen;
    void setGlobalDataPtr(GlobalData* global_data){_globalData=global_data;};
    void setCodeGenPtr(CodeGen * code_gen){ _codeGen=code_gen;};

};

// Function protoypes for the constructor functions that external translation units
// such as delegators and delegates may wish to call.
//
ANTLR3_API psitarParser sitarParserNew         (
pANTLR3_COMMON_TOKEN_STREAM
 instream);
ANTLR3_API psitarParser sitarParserNewSSD      (
pANTLR3_COMMON_TOKEN_STREAM
 instream, pANTLR3_RECOGNIZER_SHARED_STATE state);

/** Symbolic definitions of all the tokens that the 
parser
 will work with.
 * \{
 *
 * Antlr will define EOF, but we can't use that as it it is too common in
 * in C header files and that would be confusing. There is no way to filter this out at the moment
 * so we just undef it here for now. That isn't the value we get back from C recognizers
 * anyway. We are looking for ANTLR3_TOKEN_EOF.
 */
#ifdef	EOF
#undef	EOF
#endif
#ifdef	Tokens
#undef	Tokens
#endif
#define EOF      -1
#define T__70      70
#define T__71      71
#define T__72      72
#define T__73      73
#define T__74      74
#define T__75      75
#define T__76      76
#define T__77      77
#define T__78      78
#define T__79      79
#define T__80      80
#define T__81      81
#define T__82      82
#define T__83      83
#define T__84      84
#define AND      4
#define BEGIN      5
#define BEHAVIOR      6
#define BOOL      7
#define CAPACITY      8
#define CHAR      9
#define CODE      10
#define CODE_BLOCK      11
#define COLON      12
#define COMMENT      13
#define CONNECT_LEFT      14
#define CONNECT_RIGHT      15
#define DECL      16
#define DO      17
#define DOT      18
#define ELSE      19
#define END      20
#define EQUALS      21
#define ESC_SEQ      22
#define EXPR      23
#define FOR      24
#define HEX_DIGIT      25
#define IDENTIFIER      26
#define IF      27
#define IN      28
#define INCLUDE      29
#define INIT      30
#define INPORT      31
#define INPORT_ARRAY      32
#define INTEGER      33
#define KEYWORD_BOOL      34
#define KEYWORD_CHAR      35
#define KEYWORD_INT      36
#define LOG      37
#define MINUS      38
#define MODULE      39
#define NET      40
#define NET_ARRAY      41
#define NOT      42
#define NOTHING      43
#define OCTAL_ESC      44
#define OR      45
#define OUTPORT      46
#define OUTPORT_ARRAY      47
#define PARAMETER      48
#define PLUS      49
#define POINTER      50
#define PROCEDURE      51
#define RUN      52
#define SCOPE      53
#define SEND      54
#define SIMULATION      55
#define STOP      56
#define STRING      57
#define SUBMODULE      58
#define SUBMODULE_ARRAY      59
#define THEN      60
#define THIS_CYCLE      61
#define THIS_PHASE      62
#define TO      63
#define UNICODE_ESC      64
#define UNTIL      65
#define WAIT      66
#define WHILE      67
#define WIDTH      68
#define WS      69
#ifdef	EOF
#undef	EOF
#define	EOF	ANTLR3_TOKEN_EOF
#endif

#ifndef TOKENSOURCE
#define TOKENSOURCE(lxr) lxr->pLexer->rec->state->tokSource
#endif

/* End of token definitions for sitarParser
 * =============================================================================
 */
/** } */

#ifdef __cplusplus
}
#endif

#endif

/* END - Note:Keep extra line feed to satisfy UNIX systems */
