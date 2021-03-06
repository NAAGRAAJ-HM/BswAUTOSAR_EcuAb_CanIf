#pragma once
/******************************************************************************/
/* File   : infCanIf_PduR.hpp                                                 */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_CanIf.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class infCanIf_PduR{
   public:
      virtual FUNC(Std_TypeReturn, CANIF_CODE) Transmit(
         void
      ) = 0;

      virtual FUNC(Std_TypeReturn, CANIF_CODE) CancelTransmit(
         void
      ) = 0;

      virtual FUNC(Std_TypeReturn, CANIF_CODE) ReadRxPduData(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) ReadTxNotifStatus(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) ReadRxNotifStatus(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) TxConfirmation(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) RxIndication(
         void
      ) = 0;

      virtual FUNC(void, CANIF_CODE) CbCancelTxConfirmation(
         void
      ) = 0;
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

