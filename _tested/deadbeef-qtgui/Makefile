# New ports collection makefile for:	deadbeef-qtgui
# Date created:		2010-03-18
# Whom:			Gvozdikov Veniamin <g.veniamin@googlemail.com>
#
# $FreeBSD$
#

PORTNAME=	deadbeef-qtgui
PORTVERSION=	0.1
CATEGORIES=	audio
MASTER_SITES=	 http://bitbucket.org/tonn/qtgui/get/
DISTNAME=	${PORTVERSION}alpha

MAINTAINER=	g.veniamin@googlemail.com
COMMENT=	DeaDBeeF QtGui plugin

RUN_DEPENDS=	deadbeef:${PORTSDIR}/audio/deadbeef

USE_BZIP2=	yes
USE_CMAKE=	yes
QT_COMPONENTS=	gui xml qmake_build uic_build moc_build \
		rcc_build

PLIST_FILES=	lib/deadbeef/qtgui.so \
		share/deadbeef/translations/QtGui_ru_RU.qm

WRKSRC=		${WRKDIR}/qtgui

post-install:
	@${ECHO_MSG}	""
	@${ECHO_MSG}	"************************************************************"
	@${ECHO_MSG}	"ATTENTION!"
	@${ECHO_MSG}	""
	@${ECHO_MSG}	"And finally you need to disable default DeaDBeeF ui plugin."
	@${ECHO_MSG}	"Add next string to ~/.config/deadbeef/config file:"
	@${ECHO_MSG}	"blacklist_plugins gtkui"
	@${ECHO_MSG}	""
	@${ECHO_MSG}	"*************************************************************"
	@${ECHO_MSG}	""

.include <bsd.port.mk>
