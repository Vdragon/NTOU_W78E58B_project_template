/* 
主程式
	請見本檔案的header檔案以得到更多關於本檔案的說明
*/
/*||||| 程式所include之函式庫的標頭檔 | Included Library Headers |||||*/
/* Standard io library definition? */
	#include <stdio.h>

/* Definitions of 8052 register constants
   　如果您要直接存取而非透過 Project_configurations/Ports_and_control_signals_* 來存取硬體的話需引入此檔案
	#include <REG52.h> */

/* Project_configurations */
	#include "Project_configurations/Common_definitions.h"

/* Hardware_configurations */
	#include "Hardware_configurations/NTOUCS_Home_Network_51AVR.h"
	
/*||||| 常數與巨集 | Constants & Macros |||||*/

/*||||| Definition of data type, enumeration, data structure and class |||||*/

/*||||| 函式雛型 | Function Prototypes |||||*/
	/* 中斷服務子程式 */
		void cbExtInt0(void);
		void cbExtInt1(void);
		void cbTimer0(void);
		void cbTimer1(void);
		void cbSerialUART(void);
		
/*||||| 全域變數 | Global Variables |||||*/

/*||||| 主要程式碼 | Main Code |||||*/
	/* 程式進入點 | Program entry point
		 　因為嵌入式系統開機之後就會執行到電源關閉，故不需要回傳值*/
	void main(void){
		disableAllUnit();
		
		/* main loop */
		while(TRUE){
			
			
		}
		
		return;
	}

	/* 外部中斷 callback 函式 */
		void cbExtInt0(void) interrupt 0{
			return;
		}
		
		void cbExtInt1(void) interrupt 2{
			return;
		}
		
	/* 計時器／計數器中斷 callback 函式 */
		void cbTimer0(void) interrupt 1{
			return;
		}
		
		void cbTimer1(void) interrupt 3{
			return;
		}
		
	/* 序列式 UART 介面中斷 callback 函式 */
		void cbSerialUART(void) interrupt 4{
			return;
		}
		