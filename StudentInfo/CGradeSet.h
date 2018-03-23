// CGradeSet.h : CGradeSet 的声明

#pragma once

// 代码生成在 2017年6月8日, 14:31

class CGradeSet : public CRecordset
{
public:
	CGradeSet(CDatabase* pDatabase = NULL);
	DECLARE_DYNAMIC(CGradeSet)

// 字段/参数数据

// 以下字符串类型(如果存在)反映数据库字段(ANSI 数据类型的 CStringA 和 Unicode
// 数据类型的 CStringW)的实际数据类型。
//  这是为防止 ODBC 驱动程序执行可能
// 不必要的转换。如果希望，可以将这些成员更改为
// CString 类型，ODBC 驱动程序将执行所有必要的转换。
// (注意: 必须使用 3.5 版或更高版本的 ODBC 驱动程序
// 以同时支持 Unicode 和这些转换)。
//数据类型转换！！！ long&CString 均转换成 CString
	CString	m_COURSECNo;	//课程号
	CString	m_COURSECName;	//课程名
	long	m_COURSECRedit;	//学分
	CString	m_SCCHOICESNo;	//学号
	CString	m_SCCHOICECNo;	//课程号
	long	m_SCCHOICESCGrade;	//成绩
	CString	m_STUDENTSNo;	//学号
	CString	m_STUDENTSName;	//姓名
	CString	m_STUDENTSSex;	//性别
	CString	m_STUDENTSMajor;	//专业
	CTime	m_STUDENTSBirthDate;	//出生日期
	CTime	m_STUDENTSSchoolDate;	//入学日期

// 重写
	// 向导生成的虚函数重写
	public:
	virtual CString GetDefaultConnect();	// 默认连接字符串

	virtual CString GetDefaultSQL(); 	// 记录集的默认 SQL
	virtual void DoFieldExchange(CFieldExchange* pFX);	// RFX 支持

// 实现
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

};


