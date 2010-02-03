# New ports collection makefile for:	stardict2-dict-l10n-ru
# Date created:		2010-01-26
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	stardict2-dict-l10n
PORTVERSION=	2.4.2
CATEGORIES=	russian textproc
MASTER_SITES=	SF/stardict/stardict-dictionaries-ru/${PORTVERSION}
DIST_SUBDIR=	stardict

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Russian and foreign language Dictionaries for StarDict

RUN_DEPENDS=	stardict:${PORTSDIR}/textproc/stardict2

NO_BUILD=	yes
USE_BZIP2=	yes

DICTDIR=	share/stardict/dic

OPTIONS=	DAL		"Dal dictionary" off \
		COMP		"Computer dictionary" off \
		PC		"PC-user dictionary" off \
		EN_RU		"English-Russian Dictionary of Computer Terms" on

.include <bsd.port.pre.mk>

.if defined(WITH_DAL)
DISTFILES+=	stardict-dal-ru-${PORTVERSION}${EXTRACT_SUFX}
PLIST_SUB+=	DAL=""
.else
PLIST_SUB+=	DAL="@comment "
.endif

.if defined(WITH_COMP)
DISTFILES+=	stardict-computer-ru-${PORTVERSION}${EXTRACT_SUFX}
PLIST_SUB+=	COMP=""
.else
PLIST_SUB+=	COMP="@comment "
.endif

.if defined(WITH_PC)
DISTFILES+=	stardict-pc-user-ru-${PORTVERSION}${EXTRACT_SUFX}
PLIST_SUB+=	PC=""
.else
PLIST_SUB+=	PC="@comment "
.endif

.if defined(WITH_EN_RU)
DISTFILES+=	stardict-engcom-ru-${PORTVERSION}${EXTRACT_SUFX}
PLIST_SUB+=	EN_RU=""
.else
PLIST_SUB+=	EN_RU="@comment "
.endif

do-install:
	${MKDIR} ${PREFIX}/${DICTDIR}
	${FIND} ${WRKDIR}/stardict-* -type f -exec ${CP} {} ${PREFIX}/${DICTDIR} \;

.include <bsd.port.post.mk>
