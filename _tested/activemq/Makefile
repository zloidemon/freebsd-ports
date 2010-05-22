# New ports collection makefile for:	activemq
# Date created:		2010-02-07
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	activemq
PORTVERSION=	5.3.2
CATEGORIES=	net java
MASTER_SITES=	http://www.sai.msu.su/apache/${MASTER_SITE_SUBDIR}/ \
		${MASTER_SITE_APACHE}/${MASTER_SITE_SUBDIR}/
MASTER_SITE_SUBDIR=${PORTNAME}/apache-${PORTNAME}/${PORTVERSION}
DISTNAME=	apache-${PORTNAME}-${PORTVERSION}-bin

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Messaging and Integration Patterns provider

NO_BUILD=	yes

USE_JAVA=	yes
JAVA_VERSION=	1.5+
MQDATA=		${PREFIX}/lib/${PORTNAME}
MQDB=		/var/db/${PORTNAME}
ETCC=		${ETCDIR}/${PORTNAME}
MQUSER=		activemq
MQGROUP=	${MQUSER}

ALL_TARGET=	${PORTNAME}
USE_RC_SUBR=	${PORTNAME}

PORTDOCS=	LICENSE NOTICE README.txt WebConsole-README.txt user-guide.html

WRKSRC=		${WRKDIR}/apache-${PORTNAME}-${PORTVERSION}

do-install:
.for f in linux-x86-32 linux-x86-64 macosx
	@${RM} -fr ${WRKSRC}/bin/${f}
.endfor

.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} docs ${DOCSDIR}/
.for f in ${PORTDOCS}
	@${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}/
.endfor
.endif

post-install:
.for f in ${MQDATA} ${MQDB} ${ETCC}
	@${MKDIR} ${PREFIX}${f}
.endfor
	cd ${WRKSRC} && ${COPYTREE_SHARE} example ${EXAMPLESDIR}/
.for f in webapps lib bin
	cd ${WRKSRC} && ${COPYTREE_SHARE} ${f} ${MQDATA}
.endfor

	${LN} -sf ${PREFIX}${MQDB} ${MQDATA}/data
	${LN} -sf ${PREFIX}${ETCC} ${MQDATA}/conf
	${LN} -sf ${EXAMPLESDIR} ${MQDATA}/example

	@${SETENV} ${SCRIPTS_ENV} ${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.for f in ${MQDB} ${ETCC} ${EXAMPLES} ${MQDATA}
	@${CHOWN} -Rh ${MQUSER}:${MQGROUP} ${PREFIX}${f}
.endfor

.include <bsd.port.mk>
