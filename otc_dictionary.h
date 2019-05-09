/*
�����ֵ�
��Ϊ���¼��飬����µ��ֵ�ʱ��ӵ���Ӧ��ģ������棬
�������������ģ�飬���½�һ��������ģ��
1�������ֵ�
2����Ȩ�����ֵ�
3�����������ֵ�
4������ί������ֵ�
5������ɽ�����ֵ�
6�������ѳɽ���Լ����ֵ�
7���ͻ�����ֵ�
*/
#ifndef _OTC_DICTIONARY_H_
#define _OTC_DICTIONARY_H_


/************************************************************************/
/* �����ֵ�																*/
/************************************************************************/

/*
�޸�����
*/
#define FLAG_MOD_OPTIONS_BASE_INFO	0x0001
#define FLAG_MOD_ASIA_AVERAGE_INFO	0x0002
#define FLAG_MOD_ASIA_SAMPLE_INFO	0x0004
#define FLAG_MOD_ORDER_CORRE_INFO	0x0008

/*
��ҵ����
*/
enum IndustryType
{
	IT_ATYPE = 0,  // ũ���֡�������ҵ,
	IT_BTYPE,      // �ɿ�ҵ
	IT_CTYPE,      // ����ҵ
	IT_DTYPE,      // ������ȼ����ˮ�������͹�Ӧҵ
	IT_ETYPE,      // ����ҵ
	IT_FTYPE,      // ��ͨ���䡢�ִ�������ҵ
	IT_GTYPE,      // ��Ϣ���䡢�������������ҵ
	IT_HTYPE,      // ����������ҵ
	IT_ITYPE,      // ס�޺Ͳ���ҵ
	IT_JTYPE,      // ����ҵ
	IT_KTYPE,      // ���ز�ҵ
	IT_LTYPE,      // ���޺��������ҵ
	IT_MTYPE,      // ��ѧ�о�����������͵��ʿ���ҵ
	IT_NTYPE,      // ˮ���������͹�����ʩ����ҵ
	IT_OTYPE,      // ����������������ҵ
	IT_PTYPE,      // ����
	IT_QTYPE,      // ��������ᱣ�Ϻ���ḣ��ҵ
	IT_RTYPE,      // �Ļ�������������ҵ
	IT_STYPE,      // ��������������֯
	IT_TTYPE,      // ������֯
};

/*
��ҵ����
*/
enum EnterpriseType
{
	ET_DOMESTIC_EXCHANGE = 0,  // �����ڻ�������
	ET_COMMODITY_EXCHANGE,     // ������Ʒ���ӽ����г�
	ET_ABROAD_EXCHANGE,        // �����ڻ�������
	ET_FINANCIAL_INSTITUTION,  // ���ڻ���
	ET_REAL_ENTERPRICE,        // ʵ����ҵ
	ET_OTHER,                  // ����
};

/*
����״̬
*/
enum AgreementState
{
	AS_REFUSE = -1,     // �ܾ�
	AS_NONE = 0,        // δ����
	AS_APPROVE = 1      // ��׼
};

/*
ִ��״̬
*/
enum ExecutionState
{
	ES_FAILURE = -1,       // ִ��ʧ��
	ES_NONE = 0,           // δִ�� 
	ES_SUCCESS = 1,        // ִ�гɹ�
};

/*
��������
*/
enum CycleType
{
	CYCLE_DAY = 0,    //��
	CYCLE_WEEK = 1,   //��
	CYCLE_MONTH = 2,  //��
	CYCLE_YEAR = 3    //��
};

/*
ͨ��������Ϣ��������Ҫ��������������
*/
enum ConfigType
{
	CONCIG_SYS = 0,	//ϵͳ����
};

/*
���㵥����
*/
enum SettlementSheetType
{
	SST_KSD = 0,	//���˴���㵥����
	SST_CTP = 1,	//CTP���㵥����
    SST_STOCK = 2,  //��Ʊ���㵥����
    SST_GOLD = 3,   //�ƽ���㵥����
};

/*
 ���ʽ��׵Ŀͻ��˺�����
 **/
enum SubAccountClientNoType
{
    SCNT_FUTURE = 0,   //�ڻ��˺�
    SCNT_STOCK = 1,    //��Ʊ�˺�
    SCNT_GOLD = 2,     //�ƽ��˺�
};

/*
�����ѯ����
FIX:��ϵͳ����ͻʱ����
*/
#ifndef SEARCH_ALL
enum SearchType
{
	SEARCH_ALL = 0,		//��ѯ���У����ֵ��ڻ���δ����
	SEARCH_COMMON = 1,	//��ѯδ���ڵĺ͵��յ��ڵ�
	SEARCH_EXPIRE = 2,	//��ѯ���ڵ�
};
#endif // ifndef SEARCH_ALL

/*
���̱������͸��ͻ��˵Ĵ��󼶱�
*/
enum ServiceErrorLevel
{
	SERVICE_WARNING = 0,
	SERVICE_ERROR = 1,
};

/*
�Ƿ����
����ί�У��Ƿ����ѳɽ���Լ��֮����
���ڳɽ����Ƿ���ί����֮����
*/
enum OtcCorreStatus
{
	OTC_NOT_CORRE = 0,		//�޹���
	OTC_CORRE = 1,			//�й���
};

/*
����ȷ��״̬
*/
enum OtcConfirmStatus
{
	OTC_UNCONFIRMED = 0,	//δȷ��״̬
	OTC_CONFIRMED = 1,		//��ȷ��״̬
};

/*
��ͬ����
��־����Ȩ�������Լ��ӵ������ײ�������
�ײ������˶���¼���ײ��˻���Ŀǰ�ײ���ֻ�������浽�ײ��˻�
*/
enum OtcContractType{
	CT_NORMAL=0,		//��ͨ��(����)����ʾ�ͻ�������֧����֤�����Ȩ�����ǲ��Ž��տͻ��ĵ���
	CT_REVERSE=1,		//���򵥣���ʾ������ͻ�֧����֤�����Ȩ�����ǲ�������������Ʒ�г��ĳɽ���
	CT_EXEMPT_MONEY=2,	//�ʽ���ⵥ��(�ͻ��˲���¼�����ί�е�)ί�е���ʾ����۳�Ȩ������߶��ᱣ֤�𣬳ɽ�����ʾ��������ʽ�
};

/*
�ӵ�����
*/
enum OtcContractSourceType
{
	CST_PHONE = 0,			//�绰�ӵ�
	CST_PLATFORM = 1,      //ƽ̨�ӵ���20181008�޸�Ϊͨ��web��̨�˹��µ�������ͬ�绰�ӵ�������������ͨ���ͻ��˻���web��̨��
	CST_MAOLIANG=2,			//���ϵͳ�ӵ�������Դ��ί�е������޸ĳ�״̬��Ϊ����Ϣ���ɽ��������ɽ���Ա��⣩
	CST_YUNHAN=3,			//�ƺ�ϵͳ�ӵ�
	CST_WIND=4,             //windƽ̨����
	CST_WEB = 5,			//WEB�ӵ�������Դ��ί�е������޸ĳ�״̬��Ϊ����Ϣ��

	CST_END,
};

/*
�����Ƚ�������
*/
enum VolatilityCalType{
	VCT_REDUCE=0,			//�м�˥��(���̽���ʱ���м۲����������۲����ȿ�)
	VCT_FIXED,				//�м۹̶�����(���̽���ʱ���м۲����ȹ̶�Ϊ���۲�����)
	VCT_YUNHAN_FIXED,		//�м۹̶��ɽ�(���̽���ʱ���м۲����ȹ̶�Ϊ�ɽ�������)��Ŀǰ�ƺ�����ʹ��
};

/*
��֤����������
*/
enum MarginType{
	MT_NORMAL_MARGIN=0,			//��ͨ��֤�����ͣ����ô�������Ȩ��ʽ
	MT_SPECIAL_MARGIN=1,		//�ر�֤�����ͣ������ڻ���֤��+�̶����ʼ���
	MT_SHZX_MARGIN=2,			//�Ϻ��������ͣ�
	MT_DCE_SPECIAL_MARGIN =3,	//�������Ż���֤��	
	MT_DELTA = 4,				//Delta��֤��
	MT_EQUITY_MARGIN = 5,		//Ȩ������Ȩ��֤��
	MT_MAX_MARGIN,
};

/*
��Ȩ��������
��־ÿ�ս���͵��ڽ���ʹ�õļ۸�
*/
enum OptionsSettlementType
{
	OST_CLOSE=0,			//ÿ�ս���͵��ڽ��㶼ʹ�����̼�
	OST_CLOSE_SETTLEMENT=1,	//ÿ�ս���ʹ�����̼ۣ����ڽ���ʹ�ý����
	OST_SETTLEMENT=2,		//ÿ�ս���͵��ڽ��㶼ʹ�ý����
	OST_CLOSE_CUSTOM=3,		//ÿ�ս���ʹ�����̼ۣ����ڽ���ʹ���Զ����
	OST_SETTLEMENT_CUSTOM=4,//ÿ�ս���ʹ�ý���ۣ����ڽ���ʹ���Զ����
	OST_CUSTOM=5,			//ÿ�ս���͵��ڽ��㶼ʹ���Զ����
};

/************************************************************************/
/* ��Ȩ����																*/
/************************************************************************/

/*
��Ȩ����
*/
enum OptionsType{
	OT_NORMAL=0,			//��ͨ��Ȩ
	OT_AMERICAN=1,			//��ʽ��Ȩ
	OT_AMERICAN_SETTLEMENT=2,	//Ȩ������ʽ��Ȩ,��ʽ���㣬ŷʽ����
	OT_COMMON=100,			//δ֪��Ȩ
	OT_BARRIER=200,			//��׼�ϰ�ʽ��Ȩ
	OT_ASIA=300,			//��ʽ��Ȩ(����)
	OT_ASIA_STANDARD=301,	//��׼��ʽ��Ȩ
	OT_ASIA_ENHANCE=302,	//��ǿ��ʽ��Ȩ
	OT_BINARY=400,			//��Ԫ��Ȩ
	OT_DOUBLE_BARRIER=500,	//˫���ϰ�ʽ��Ȩ
	OT_MAX,
};

/*
��Ȩ������
*/
enum OptionsGroupType{
	OGT_NORMAL=0,				//��ͨ�ĵ�����Ȩ
	OGT_VERTICAL_SPREAD=1,		//��ֱ�۲����
	OGT_STRANGLE=2,				//��ʽ���
	OGT_RISK_REVERSAL=3,		//������ת���
	OGT_SEAGULL=4,				//��Ÿ��Ȩ��3�ȣ�
	OGT_MAX
};

/*
��������
*/
enum OptionsNotionalPrincipalType{
	ONPT_NORMAL=0,				//��ͨ��Ȩ
	ONPT_ANNUALIZED=1,			//�껯���屾����
	ONPT_NON_ANNUALIZED=2,		//���껯���屾����

	ONPT_MAX
};




/************************************************************************/
/* ��������(ExoticType)													*/
/************************************************************************/

/*
�ϰ�ʽ��Ȩ����������
*/
enum BarrierExoticType{
	BARRIER_UP_IN = 0,		//������������
	BARRIER_UP_OUT = 1,		//�����ó�����
	BARRIER_DOWN_IN = 2,	//�½���������
	BARRIER_DOWN_OUT = 3,	//�½��ó�����
};

/*
��ʽ��Ȩ����
*/
enum AsianExoticType{
	ASIAN_AVERAGE_PRICE = 0,		//ƽ���۸���ʽ��Ȩ
	ASIAN_AVERAGE_STRIKE = 1,		//ƽ��ִ�м���ʽ��Ȩ
};

/*
��Ԫ��Ȩ����
*/
enum BinaryExoticType{
	BINARY_CASH_OR_NOTHING = 0,		//�ֽ��������
	BINARY_ASSET_OR_NOTHING = 1,	//�ʲ���������
};




/************************************************************************/
/* ����ί�����															*/
/************************************************************************/

/*
����ί�е���״̬
*/
enum OtcOrderStatus
{
	OS_DEAL_FAILED = -2,	//ת�ɽ�ʧ�ܡ��ƺ�������
	OS_DISCARD = -1,		//ʧЧ(�ͻ��˲���Ҫ��ʧЧ��ί�е���ŵ��ڴ���)
	OS_NORMAL = 0,			//����״̬
	OS_UNCOMPLETED = 1,		//δ��ɣ��ʽ��㣩
	OS_DEALED = 2,			//�Ѿ�ת�ɳɽ���
	OS_DEALING = 3,			//��׼��תΪ�ɽ������ƺ�������
	OS_PARTDEAL = 4,		//���ֳɽ�
};

/*
����ί�г���״̬
*/
enum OtcOrderUndoStatus
{
	OUS_NORMAL = 0,			//����״̬
	OUS_CANCELLING = 1,		//����״̬
	OUS_CANCELLED = 2,		//�ѳ�״̬
};

/*
����ί������״̬
*/
enum OtcOrderLockStatus
{
	OLS_UNLOCKING = -4,		//������״̬
	OLS_LOCKING = -3,		//������״̬
	OLS_UNLOCK_FAILED = -2,	//����ʧ��
	OLS_LOCK_FAILED = -1,	//����ʧ��
	OLS_UNLOCKED = 0,		//δ����
	OLS_LOCKED = 1,			//������
};


/*
Ȩ����֧��ʱ��
*/
enum OtcPremiumPayTime
{
	TIME_INFANCY = 0,  //�ڳ�֧��
	TIME_TERMINAL =1,  //��ĩ֧��
};

/************************************************************************/
/* ����ɽ����															*/
/************************************************************************/

/*
����ɽ�����
*/
enum OtcTradeType
{
	TT_COMMON = 0,				//��ͨ�ĳ���ɽ���
	TT_NATURAL_EXPIRE = 1,		//��Ȼ������Ϊƽ�ֳɽ�
	TT_TRIGGER_EXPIRE = 2,		//����������Ϊƽ�ֳɽ�
	TT_CANCEL = 3,				//�����Ϊƽ�ֳɽ�
};

/*
����ɽ�״̬
*/
enum OtcTradeStatus
{
	TRADE_DISCARD = -1,			//����״̬
	TRADE_NORMAL = 0,			//����״̬
};




/************************************************************************/
/* �����ѳɽ���Լ���													*/
/************************************************************************/

/*
�����Լ��������
*/
enum OtcContractExpirType
{
	CET_NOT_EXPIRED = 0,		//δ����
	CET_NATURAL = 1,			//��Ȼ����
	CET_BARRER_TRIGGER = 2,		//�ϰ���Ȩ�ó���������
	CET_ALL_CLOSE = 3,			//��ȫƽ�ֵ���
};

/*
�����Լ״̬
*/
enum OtcContractStatus
{
	CONTRACT_DISCARD = -1,	//����״̬
	CONTRACT_NORMAL = 0,	//����״̬
	CONTRACT_SPLIT = 1,		//�ȴ����
	CONTRACT_MERGE = 2,		//�ȴ��ϲ�
};


enum OtcSplitMergeType
{
	OSM_SPLIT =0,	//���
	OSM_MERGE =1,	//�ϲ�
};

/*
�����Լ�ϰ���Ȩ����״̬
*/
enum BarrierTriggerStatus{
	BTS_NOT_TRIGGERED = 0,		//δ����
	BTS_TRIGGERED = 1,			//�Ѵ���
};




/************************************************************************/
/* �����ѳɽ���Լ���													*/
/************************************************************************/

/*
�������״̬
*/
enum OtcCancelStatus
{
	CANCEL_DISCARD = -1,	//����״̬
	CANCEL_NORMAL = 0,		//����״̬
};




/************************************************************************/
/* �ͻ����																*/
/************************************************************************/

/*
�ͻ����ͣ���Ϊ��Ȼ�˺ͷ���
*/
enum ClientType{
	CLIENT_LEGAL_PERSON = 'A',
	CLIENT_PRODUCT_PERSON = 'C',
	CLIENT_NATURAL_PERSON = 'D',
	CLIENT_FINANCIAL_INSTITUTION = 'F',	//���ڻ�������
};

/*
�ͻ��ȼ�
*/
enum ClientLevel{
	CLIENT_LEVEL_NONE = -1,
	CLIENT_LEVEL_C4 = 0,	//C4
	CLIENT_LEVEL_C5 ,		//C5
	CLIENT_PROFESSION,		//רҵͶ����
};

//�ͻ��ɽ���״̬
enum ClientTradeStatus{
	CT_FORBID_TRADE = 0,	//��ֹ����
	CT_CAN_TRADE = 1,		//�ɽ���
};

/*
�ͻ��ʽ���ˮ�����ͣ�20190111���ø��ʽ���ˮ��
*/
enum JournalType{
	JT_CASH_IN_OUT=0,//�ͻ����������Ϊ��𣬸���Ϊ����
	JT_INVESTMENT_OUTLAYS=1,//Ͷ��֧�������ڿ۳���ȨȨ����
	JT_INVESTMENT_INCOME=2,//Ͷ�����棬��Ҫ����Ȩӯ��
	JT_INTEREST_INCOME=3,//��Ϣ���룬Ŀǰ���˻��Ŀ������
	JT_HEDGE_IN_OUT=4,//�ײ������
	JT_HEDGE_INCOME=5,//�ײ�����
	JT_COLLECT_FEE=6,//���������ѣ�������ʾ���������ѣ�������ʾ����������
	JT_CASHOUT_FROZEN_CAPITAL=7,//�ͻ����𶳽�����ʽ�
	JT_CASHOUT_RELEASE_CAPITAL=8,//�ͻ�����ܾ��ͷŶ����ʽ�
	JT_DEDUCT_CASHOUT_FROZEN=9,//�۳��ͻ����𶳽��ʽ�
	JT_TRANSIT_MONEY_HANDLE=10,//�ͻ���;�ʽ�䶯������������;�ʽ𣬸���������;�ʽ�
	JT_MARGIN_CREDIT_LINE_HANDLE=11,//�ͻ���֤�����Ŷ�ȱ䶯
	JT_APP_BALANCE_CO_HANDLE=12,//����Ȩ�ʽ�ת���˻����˻����ת��������Ȩ
	JT_HEDGE_MOD_ORIGINAL_CAPITAL = 13,	//�޸�ռ���ʽ𣬶����ײ��ʽ�

	//20190304 �����ʽ�ӦΪ��������ֻ�в��ּ�¼�����͸�Ϊ100
	//JT_CHANGE_HEDGE_ACCOUNT_CLIENT_ACCOUNT = 100,	// �ײ�����ͨ�˻�ͬʱ����

	//ǰ�����������ֹ����˵ȴ������������Ϊ����ʹ��
	JT_FROZEN_CAPITAL=1004,//��������ʽ�
	JT_RELEASE_CAPITAL=1005,//�ͷŶ����ʽ�
	JT_FROZEN2OUTLAYS=1006,//�����ʽ�ת֧�������ڿͻ�ί�е�ת�ɽ���
	JT_FROZEN2MARGIN=1007,//�����ʽ�ת��֤��
	JT_MARGIN_CALL=1008,//��֤��׷�ɣ������Ա�ֹ�׷�ɻ��ͷŵģ��ͷ�ʱ���Ϊ��
	JT_MARGIN_CALL_ERROR=1009,//��֤��׷�ɣ���Ϊ�����������ظ��������⣬���±�֤���ͷŵģ�����׷��
	JT_RELEASE_MARGIN=1010,//�ͷű�֤��
	JT_INCOME=1011,//�˻�����
	JT_STRIKE_BALANCE=1012,//���ˣ���Ϊ���������ظ����̵���������ĳ���
	JT_HEDGE_AUTO_INCOME=1013,//�ײ��˻����棬���ڳ�����㷴�򵥵�����
	JT_HEDGE_STRIKE_BALANCE=1014,//�ײ��˻����ˣ��������ָ����ظ����̵����
	JT_ORDER_FROZEN_PREMIUM = 1015,//ί�е�����Ȩ����
	JT_ORDER_RELEASE_PREMIUM = 1016,//ί�е��ͷŶ���Ȩ����
	JT_ORDER_FROZEN_MARGIN = 1017,//ί�е����ᱣ֤��
	JT_ORDER_RELEASE_MARGIN = 1018,//ί�е��ͷŶ��ᱣ֤��
	JT_ORDER_DEDUCT_DIFF_PREMIUM = 1019,//ί�е�����Ȩ�����㱾�γɽ�Ȩ�����ȣ���۳���Ӧ���Ȩ����(��������ᷢ��)
	JT_ORDER_DEDUCT_DIFF_MARGIN = 1020,//ί�е����ᱣ֤���㱾�α�֤���ȣ���۳���Ӧ��֤��
	JT_CONTRACT_INFANCY_PREMIUM_ADJUST = 1021,//Ȩ�������
	JT_MAX,//���ֵ
};

enum AccountOperatorType{
	AOT_CASH_IN_OUT = 0,			 //�����
	AOT_HEDGE_CASH_IN_OUT=1,		 //�ײ������
	AOT_INVESTMENT_IN_OUT=2,		 //Ͷ�����桢֧��
	AOT_HEDGE_INVESTMENT_IN_OUT=3,   //�ײ����桢֧��
	AOT_TRANSIT_MONEY_HANDLE=4,		 //��;�ʽ�䶯
	AOT_CREDIT_LINE_HANDLE=5,		 //�ͻ����Ŷ�ȱ䶯
	AOT_CHANGE_HEDGE_ACCOUNT_CLIENT_ACCOUNT = 6, //�ͻ��ʽ��˻����ײ��ʽ��˻����ʽ��л����ײ��˻�����100���ͻ��˻�����100���ײ��˻�����100���ͻ��˻�����100��	
	AOT_DAY_CREDIT_LINE_HANDLE = 7,  //�ͻ��������Ŷ�ȱ������;�ʽ��ܳ�����ֵ 
	AOT_INTEREST_INCOME = 8,		// ��Ϣ����
	AOT_MAX,//���ֵ
};

//�ͻ��˻��ʽ��ǿͻ��ģ��ײ��˻��ʽ������ǵ�
enum AccountChangeType{
	ACT_CASH_IN = 0,			 //���
	ACT_CASH_OUT_FROZEN = 1,	 //�������붳���ʽ�
	ACT_CASH_OUT_RELEASE = 2,	 //��������ʧ���ͷ��ʽ�
	ACT_CASH_OUT = 3,			 //����,�Ӷ����˻��ۼ�
	
	ACT_HEDGE_CASH_IN = 10,				//�ײ����
	ACT_HEDGE_CASH_OUT_FROZEN = 11,		//�ײ��������붳���ʽ�
	ACT_HEDGE_CASH_OUT_RELEASE = 12,	//�ײ���������ʧ���ͷŶ���
	ACT_HEDGE_CASH_OUT = 13,			//�ײ�����,���ײ������˻��ۼ�

	ACT_INVESTMENT_IN = 20,				//Ͷ������
	ACT_INVESTMENT_OUT_FROZEN = 21,		//Ͷ��֧�����붳���ʽ�
	ACT_INVESTMENT_OUT_RELEASE= 22,		//Ͷ��֧������ʧ���ͷ��ʽ�
	ACT_INVESTMENT_OUT = 23,			//Ͷ��֧��,�Ӷ����˻��ۼ�

	ACT_HEDGE_INVESTMENT_IN = 30,			//�ײ�Ͷ������
	ACT_HEDGE_INVESTMENT_OUT_FROZEN = 31,	//�ײ�Ͷ��֧�����붳���ʽ�
	ACT_HEDGE_INVESTMENT_OUT_RELEASE = 32,	//�ײ�Ͷ��֧������ʧ���ͷ��ʽ�
	ACT_HEDGE_INVESTMENT_OUT = 33,			//�ײ�Ͷ��֧��,���ײ������˻��ۼ�

	ACT_CHANGE_HEDGE_ACCOUNT_CLIENT_ACCOUNT_IN = 40,		//��ͨ���ײ��˻� �����ʽ�
	ACT_CHANGE_HEDGE_ACCOUNT_CLIENT_ACCOUNT_OUT_FROZEN = 41, //��ͨ���ײ��˻� �����ʽ�
	ACT_CHANGE_HEDGE_ACCOUNT_CLIENT_ACCOUNT_OUT_RELEASE = 42, //��ͨ���ײ��˻� �ͷ��ʽ�
	ACT_CHANGE_HEDGE_ACCOUNT_CLIENT_ACCOUNT_OUT = 43,		//��ͨ���ײ��˻� �����ʽ�

	ACT_TRANSIT_MONEY_HANDLE=50,			//��;�ʽ�䶯
	ACT_CREDIT_LINE_HANDLE=51,		//�ͻ����Ŷ�ȱ䶯
	ACT_COLLECT_FEE = 52,			 //����������
	ACT_HEDGE_MOD_ORIGINAL_CAPITAL = 53,		//�����޸�ռ���ʽ�

	ACT_CONTRACT_INFANCY_PREMIUM_ADJUST= 60, //�ɽ����������Ȩ����
	ACT_CONTRACT_INFANCY_PREMIUM_CREDIT_ADJUST= 61, //�ɽ��������������Ȩ����
	ACT_CONTRACT_INFANCY_PREMIUM_ADJUST_PROFIT = 62, //����Ȩ�������������
	ACT_CONTRACT_TERMINAL_PREMIUM_ADJUST_PROFIT = 63, //����Ȩ�������������
	ACT_CONTRACT_INFANCY_PREMIUM_ADJUST_HEDGE_PROFIT = 64, //����Ȩ����������ײ�����
	ACT_CONTRACT_TERMINAL_PREMIUM_ADJUST_HEDGE_PROFIT = 65, //����Ȩ����������ײ�����

	ACT_INTEREST_INCOME= 70,				//��Ϣ����
	ACT_INTEREST_OUTCOME_FROZEN = 71,		//��Ϣ֧�����붳���ʽ�
	ACT_INTEREST_OUTCOME_RELEASE= 72,		//��Ϣ֧������ʧ���ͷ��ʽ�
	ACT_INTEREST_OUTCOME = 73,				//��Ϣ֧��,�Ӷ����˻��ۼ�

	ACT_ORDER_FROZEN_PREMIUM			= 100,	 //ί�е�����Ȩ����
	ACT_ORDER_FROZEN_MARGIN				= 101,	 //ί�е����ᱣ֤��
	ACT_ORDER_FROZEN_CREDIT_PREMIUM		= 102,	 //ί�е���������Ȩ����
	ACT_ORDER_FROZEN_CREDIT_MARGIN		= 103,	 //ί�е��������ű�֤��
	
	ACT_TRADE_FROZEN_PREMIUM	= 110,	 //�ɽ�������Ȩ����
	ACT_TRADE_FROZEN_MARGIN		= 111,	 //�ɽ������ᱣ֤��
	ACT_TRADE_FROZEN_CREDIT_PREMIUM	= 112,	 //�ɽ�������Ȩ����
	ACT_TRADE_FROZEN_CREDIT_MARGIN		= 113,	 //�ɽ������ᱣ֤��

	ACT_CANCEL_PROFIT			= 120,	 //�������   
	ACT_API_CLOSE_PROFIT		= 121,	 //APIƽ������
	ACT_HEDGE_CANCEL_PROFIT		= 122,	 //�ײ��������
	ACT_EXPIRE_PROFIT			= 130,	 //�������棬����
	ACT_HEDGE_EXPIRE_PROFIT		= 131,	 //�ײ��������棬����
	ACT_MARGIN_CALL				= 140,   //�˹�׷�ɱ�֤��(��ͨ�˻�)��׷�ɵ���Ȩ
	ACT_CREDIT_MARGIN_CALL		= 141,   //�˹�׷�ɱ�֤��(�����˻�)��׷�ɵ���Ȩ
	ACT_CLIENT_MARGIN_CALL				= 142,   //�˹�׷�ɱ�֤��(��ͨ�˻�)��׷�ɵ��ͻ��˻�
	ACT_CLIENT_CREDIT_MARGIN_CALL		= 143,   //�˹�׷�ɱ�֤��(�����˻�)��׷�ɵ��ͻ��˻�

	ACT_CONTRACT_INFANCY_PREMIUM_ADJUST_PROFIT_RECOVERY = 10062, //����Ȩ�������������
	ACT_CONTRACT_TERMINAL_PREMIUM_ADJUST_PROFIT_RECOVERY = 10063, //����Ȩ�������������
	ACT_CONTRACT_INFANCY_PREMIUM_ADJUST_HEDGE_PROFIT_RECOVERY = 10064, //����Ȩ����������ײ�����
	ACT_CONTRACT_TERMINAL_PREMIUM_ADJUST_HEDGE_PROFIT_RECOVERY = 10065, //����Ȩ����������ײ�����

	ACT_ORDER_RELEASE_PREMIUM			= 10100,	 //ί�е��ͷ�Ȩ����
	ACT_ORDER_RELEASE_MARGIN			= 10101,	 //ί�е��ͷű�֤��
	ACT_ORDER_RELEASE_CREDIT_PREMIUM	= 10102,	 //ί�е��ͷ�������Ȩ����
	ACT_ORDER_RELEASE_CREDIT_MARGIN		= 10103,	 //ί�е��ͷ������ʱ�֤��

	ACT_TRADE_RELEASE_PREMIUM			= 10110,	 //�ɽ����ͷ�Ȩ����
	ACT_TRADE_RELEASE_MARGIN			= 10111,	 //�ɽ����ͷű�֤��
	ACT_TRADE_RELEASE_CREDIT_PREMIUM	= 10112,	 //�ɽ����ͷ�����Ȩ����
	ACT_TRADE_RELEASE_CREDIT_MARGIN	    = 10113,	 //�ɽ����ͷ����ű�֤��
	
	ACT_CANCEL_PROFIT_RECOVERY			= 10120,	 //�������ָ�
	ACT_HEDGE_CANCEL_PROFIT_RECOVERY	= 10122,	 //�ײ��������ָ�
	ACT_EXPIRE_PROFIT_RECOVERY			= 10130,	 //��������ָ������ָ̻�   
	ACT_HEDGE_EXPIRE_PROFIT_RECOVERY	= 10131,	 //�ײ���������ָ������ָ̻�
	
	ACT_MAX,//���ֵ
};

/*
�۲���ϴ����־����
*/
//�Ƿ�Ϊ���ڱ�־���Ǹñ�־λΪ1
#define ARBITRAGE_INSTRUMENT_EXCHANGE_FLAG							0x0001
//�Ƿ�ɾ����־���Ǹñ�־λΪ1
#define ARGITRAGE_INSTRUMENT_DEL_FLAG								0x0002

// ����������
enum TVolatilityType
{
	kTradeVolatility	= 0, // �ɽ�������
	kHedgeVolatility	= 1, // ���ղ�����
	kTheoryVolatility	= 2, // ���۲�����
	kMaxVolatility			 // ����
};

// ��������
enum TCycleType
{
	kCycleTypeOneWeek		= 0,  // 1��
	kCycleTypeTwoWeek		= 1,  // 2��
	kCycleTypeOneMonth		= 2,  // 1��
	kCycleTypeTwoMonth		= 3,  // 2��
	kCycleTypeThreeMonth	= 4,  // 3��
	kCycleTypeSixMonth		= 5,  // 6��
	kCycleTypeOneYear		= 6,  // 1��
	kCycleTypeMax
};

//�ͻ�Э��汾
enum ProtoVersion
{
	SAC2014		= 1,
	SAC2015		= 2,
	ISDA		= 3,
	NAFMII		= 4,
	OTHER		= 9
};

#define CAN_TRADE_CFFEX  0x0001
#define CAN_TRADE_CZCE	 0x0002
#define CAN_TRADE_DCE    0x0004
#define CAN_TRADE_INE    0x0008
#define CAN_TRADE_SGE    0x0010
#define CAN_TRADE_SHFE   0x0020
#define CAN_TRADE_SSE    0x0040
#define CAN_TRADE_SZSE   0x0080

#endif

