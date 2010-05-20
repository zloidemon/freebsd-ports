# New ports collection makefile for:	activemq
# Date created:		2010-02-07
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	activemq
PORTVERSION=	5.3.2
CATEGORIES=	net java
MASTER_SITES=	http://www.sai.msu.su/apache/ \
		ftp://apache.rinet.ru/pub/mirror/apache.org/dist/ \
		http://www.apache.org/dist/ \
		http://www.eu.apache.org/dist/
MASTER_SITE_SUBDIR=${PORTNAME}/apache-${PORTNAME}/${PORTVERSION}
DISTNAME=	apache-${PORTNAME}-${PORTVERSION}-bin

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Apache ActiveMQ is messaging and Integration Patterns provider

NO_BUILD=	yes

USE_JAVA=	yes
JAVA_VERSION=	1.5+
DATADIR=	${PREFIX}/lib/${PORTNAME}
VARDB=		/var/db/${PORTNAME}
ETCC=		${PREFIX}/etc/${PORTNAME}
EXAMPLES=	${PREFIX}/share/examples/${PORTNAME}
PUSER=		activemq
PGROUP=		${PUSER}

ALL_TARGET=	${PORTNAME}
USE_RC_SUBR=	${PORTNAME}

PORTDOCS=	LICENSE NOTICE README.txt WebConsole-README.txt user-guide.html

WRKSRC=		${WRKDIR}/apache-${PORTNAME}-${PORTVERSION}

do-install:
.for f in linux-x86-32 linux-x86-64 macosx
	${RM} -fr ${WRKSRC}/bin/${f}
.endfor

.if !defined(NOPORTDOCS)
	${MKDIR} ${DOCSDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} docs ${DOCSDIR}/
.for f in ${PORTDOCS}
	${INSTALL_DATA} ${WRKSRC}/${f} ${DOCSDIR}/
.endfor
.endif

post-install:
.for f in ${DATADIR} ${VARDB} ${ETCC} ${EXAMPLES}
	${MKDIR} ${f}
.endfor
	${LN} -sf ${VARDB} ${DATADIR}/data
	${LN} -sf ${ETCC} ${DATADIR}/conf
	${LN} -sf ${EXAMPLES} ${DATADIR}/examles
	cd ${WRKSRC} && ${COPYTREE_SHARE} webapps ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} lib ${DATADIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} bin ${DATADIR}

	${SETENV} ${SCRIPTS_ENV} ${SH} ${PKGINSTALL} ${PKGNAME} POST-INSTALL

.for f in ${VARDB} ${ETCC} ${EXAMPLES} ${DATADIR}
	${CHOWN} -Rh ${PUSER}:${PGROUP} ${f}
.endfor

.include <bsd.port.mk>
