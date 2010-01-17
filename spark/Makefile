# New ports collection makefile for:	spark
# Date created:		2010-01-17
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	spark
PORTVERSION=	2.5.8
CATEGORIES=	net-im java
MASTER_SITES=	http://download.igniterealtime.org/${PORTNAME}/
DISTNAME=	${PORTNAME}_2_5_8

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Cross-platform real-time collaboration client

SPARKDIR=	lib/${PORTNAME}
PLIST_SUB+=	SPARKDIR="${SPARKDIR}"
NO_BUILD=	yes
USE_GETTEXT=	yes
USE_LDCONFIG=	yes
WITHOUT_NLS=	yes

WRKSRC=		${WRKDIR}/Spark

do-install:
	${MKDIR} ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} .install4j ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} bin ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} lib ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} documentation ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} jre ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} logs ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} plugins ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} resources ${PREFIX}/${SPARKDIR}
	cd ${WRKSRC} && ${COPYTREE_SHARE} xtra ${PREFIX}/${SPARKDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/Spark ${PREFIX}/${SPARKDIR}
	${LN} -sf ${PREFIX}/${SPARKDIR}/Spark ${PREFIX}/bin/${PORTNAME}

.include <bsd.port.pre.mk>
.include <bsd.port.post.mk>
