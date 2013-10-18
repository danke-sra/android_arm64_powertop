#include "report-data-html.h"

void init_div(struct tag_attr *div_attr, const char *css_class, const char *css_id)
{
	div_attr->css_class=css_class;
	div_attr->css_id=css_id;
}

void
init_top_table_attr(struct table_attributes *table_css, int rows, int cols){
	table_css->pos_table_title=L;
	table_css->table_class="emphasis1";
	table_css->th_class="table_sysinfo";
	table_css->td_class="";
	table_css->tr_class="";
	table_css->title_mod=0;
	table_css->rows=rows;
	table_css->cols=cols;
}

void init_title_attr(struct tag_attr *title_attr)
{
	title_attr->css_class="content_title";
	title_attr->css_id="";
}

void init_std_table_attr(struct table_attributes *table_css, int rows, int cols){
	table_css->table_class="emphasis2";
	table_css->tr_class="emph1";
	table_css->th_class="emph_title";
	table_css->td_class="";
	table_css->pos_table_title=T;
	table_css->title_mod=0;
	table_css->rows=rows;
	table_css->cols=cols;
}

/* Other Helper Functions */
string
double_to_string(double dval)
{
	ostringstream dtmp;
	string str;
	dtmp << dval;
	str= dtmp.str();
	str = str.substr(0, str.find(".")+2);
	return str;
}


