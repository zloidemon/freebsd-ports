# New ports collection makefile for:	cursor-chameleon
# Date created:		2009-11-14
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	chameleon
PORTVERSION=	0.5
CATEGORIES=	x11-themes
MASTER_SITES=	http://www.egregorion.net/works/
PKGNAMEPREFIX=	cursor-
DISTNAME=	Chameleon-White-${PORTVERSION}.tar.bz2 \
		Chameleon-Pearl-${PORTVERSION}.tar.bz2 \
		Chameleon-SkyBlue-${PORTVERSION}.tar.bz2 \
		Chameleon-DarkSkyBlue-${PORTVERSION}.tar.bz2 \
		Chameleon-Anthracite-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Chameleon Xcursors theme

USE_BZIP2=	yes
NO_BUILD=	yes

do-configure:
	@${MKDIR} ${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-large \
	${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-regular \
	${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-small \
	${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-large \
	${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-regular \
	${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-small \
	${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-large \
	${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-regular \
	${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-small \
	${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-large \
	${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-regular \
	${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-small \
	${PREFIX}/lib/X11/icons/${PORTNAME}-white-large \
	${PREFIX}/lib/X11/icons/${PORTNAME}-white-regular \
	${PREFIX}/lib/X11/icons/${PORTNAME}-white-small

do-install:
	cd ${WRKDIR}/Chameleon-Anthracite-Large-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-large
	cd ${WRKDIR}/Chameleon-Anthracite-Regular-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-regular
	cd ${WRKDIR}/Chameleon-Anthracite-Small-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-anthracite-small
	cd ${WRKDIR}/Chameleon-DarkSkyBlue-Large-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-large
	cd ${WRKDIR}/Chameleon-DarkSkyBlue-Regular-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-regular
	cd ${WRKDIR}/Chameleon-DarkSkyBlue-Small-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-darkskyblue-small
	cd ${WRKDIR}/Chameleon-Pearl-Large-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-large
	cd ${WRKDIR}/Chameleon-Pearl-Regular-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-regular
	cd ${WRKDIR}/Chameleon-Pearl-Small-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-pearl-small
	cd ${WRKDIR}/Chameleon-SkyBlue-Large-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-large
	cd ${WRKDIR}/Chameleon-SkyBlue-Regular-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-regular
	cd ${WRKDIR}/Chameleon-SkyBlue-Small-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-skyblue-small
	cd ${WRKDIR}/Chameleon-White-Large-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-white-large
	cd ${WRKDIR}/Chameleon-White-Regular-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-white-regular
	cd ${WRKDIR}/Chameleon-White-Small-${PORTVERSION} && ${CP} -R * \
	${PREFIX}/lib/X11/icons/${PORTNAME}-white-small

post-install:
	@${CAT} ${PKGMESSAGE}

.include <bsd.port.mk>
