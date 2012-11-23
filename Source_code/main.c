/* 
main.c
	請見本檔案的header檔案以得到更多關於本檔案的說明
*/
/*||||| 程式所include之函式庫的標頭檔 | Included Library Headers |||||*/
/* Standard io library definition? */
#include <stdio.h>

/* Definitions of 8051 register constants */
#include <REG51.h>

/* Common definitions */
#include "Project_configurations/Common_definitions.h"

/*||||| 常數與巨集 | Constants & Macros |||||*/

/*||||| Definition of data type, enumeration, data structure and class |||||*/

/*||||| 函式雛型 | Function Prototypes |||||*/
	/* 初始化硬體（關掉所有設備信號）的函式 */
	void initialize();

/*||||| 全域變數 | Global Variables |||||*/

/*||||| 主要程式碼 | Main Code |||||*/
/* 程式進入點 | Program entry point
   　因為嵌入式系統開機之後就會執行到電源關閉，故不需要回傳值*/
void main(void){
	initialize();
	
	/* main loop */
	while(TRUE){
		
		
	}
	
	return;
}

void initialize(){
	/* 停用 ADC 的輸出 */
		adc_read_bar_cs_bar = LOGIC_HIGH;
	/* 停用 DIP 的輸出 */
		dip_ground = LOGIC_HIGH;
	/* 停用 LCD */
		lcd_enable = LOGIC_LOW;
	/* disable LCD register write */
		lcd_read_write_bar = LOGIC_HIGH;
	return;
}