# Created by: Gvozdikov Veniamin <g.veniamin@googlemail.com>
# $FreeBSD$

PORTNAME=	mongrel2
PORTVERSION=	1.7.5
PORTREVISION=	1
CATEGORIES=	www
MASTER_SITES=	http://mongrel2.org/static/downloads/

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Is an application, language, and network arch

LIB_DEPENDS=	zmq:${PORTSDIR}/devel/zmq \
		sqlite3:${PORTSDIR}/databases/sqlite3

USE_GMAKE=	yes
USE_BZIP2=	yes
MAKE_FLAGS=	freebsd
EXAMPLES_LIST=	bbs \
		chat \
		configs \
		http_0mq \
		kegogi \
		mp3stream \
		procer \
		python \
		tornado \
		zcov

OPTIONS_DEFINE=	EXAMPLES
EXAMPLES_DESC=	Install examplse

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MEXAMPLES}
PLIST_SUB+=	EXAMPLES=""
.else
PLIST_SUB+=	EXAMPLES="@comment "
.endif

post-patch:
	@${REINPLACE_CMD} -e 's#/usr/local#${LOCALBASE}#g' ${WRKSRC}/Makefile

post-install:
.if ${PORT_OPTIONS:MEXAMPLES}
	@${MKDIR} ${EXAMPLESDIR}
.for examples in ${EXAMPLES_LIST}
	@cd ${WRKSRC}/examples && ${COPYTREE_SHARE} ${examples} ${EXAMPLESDIR}
.endfor
.endif

.include <bsd.port.mk>
