#ifndef __MCONFIG_ERR_H__
#define __MCONFIG_ERR_H__

#ifdef DEBUG
	#define DEBUG_PRINT(fmt, args...) fprintf(stderr, "######DEBUG: %s:%d:%s(): " fmt, \
    			__FILE__, __LINE__, __func__, ##args)
#else
	#define DEBUG_PRINT(fmt, args...)
#endif

void mcfg_set_err(const char *err_fmt, ...);
const char *mcfg_get_err(void);

#endif /* __MCONFIG_ERR_H__ */
