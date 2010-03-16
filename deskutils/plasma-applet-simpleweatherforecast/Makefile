# New ports collection makefile for:	plasma-applet-simpleweatherforecast
# Date created:		2009-03-04
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD: ports/deskutils/plasma-applet-simpleweatherforecast/Makefile,v 1.4 2009/07/31 13:50:00 dinoex Exp $
#

PORTNAME=	simpleweatherforecast
PORTVERSION=	1.3
CATEGORIES=	deskutils kde
MASTER_SITES=	http://kde-look.org/CONTENT/content-files/
PKGNAMEPREFIX=	plasma-applet-
DISTNAME=	92149-${PORTNAME}-${PORTVERSION}

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	Weather plasma applet for KDE4

RUN_DEPENDS=	wget:${PORTSDIR}/ftp/wget

USE_CMAKE=	yes
USE_KDE4=	automoc4 kdeprefix kdelibs
USE_QT_VER=	4
QT_COMPONENTS=	gui dbus network opengl svg webkit xml \
		qmake_build moc_build rcc_build uic_build

WRKSRC=		${WRKDIR}/plasma-${PORTNAME}-${PORTVERSION}-kde-4.3.80

.include <bsd.port.mk>
